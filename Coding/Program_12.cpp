// Write a menu driven program to Do the Sum and Product of Two matrices and Transpose of a Matrix.

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int a, b, c, d, first[10][10], second[10][10], final[10][10];

int check(int &e, int &f);
int display(int show[][10], int a, int b);
int input(char choice);
int input(int a , int b , int c , int d);

int main()
{
    system("CLS");
    char choice;
    cout << "Select the operation you want to perform \n"
         << "(a) Sum \n"
         << "(b) Product \n"
         << "(c) Transpose of Matrix. \n";
    cin >> choice;
    if (choice =='c'|| choice == 'C')
    {
        int matrix[10][10],temp[10][10],a,b;
        cout<<"Enter the Dimesions of matrix: \n";
        cin >> a >> b;
        cout<<"Enter the elements in the array :\n";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b ; j++)
            {
                cin >> matrix[i][j];
            } 
        }
        cout<<"Transpose of Matrix is : \n ";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b ; j++)
            {
                temp[i][j]=matrix[j][i];
            } 
        }
        display(temp,a,b);
        exit(0);
    }
    input(choice);
    return 0;
}

int check(int &e, int &f)
{
    while ( e <= 0 || f <= 0)
    {
       cout<<"Invalid Input , Try again !! \n";
       cin>>e>>f; 
    }
    return 0;
}

int display(int show[][10], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << show[i][j] << "  ";
        }
        cout << "\n";
    }
    return 0;
}
int input(char choice)
{
    cout << "Input the Rows and Column For First Matrix :\n";
    cin >> a >> b;
    check(a, b);
    cout << "Input the Rows and Column for Second Matrix :\n";
    cin >> c >> d;
    check(c, d);
    choice = toupper(choice);
    switch (choice)
    {
    case 'A':
    {
        if (a == c && b == d)
        {
            input(a,b,c,d);
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    final[i][j] = first[i][j] + second[i][j];
                }
            }
            display(final, a, b);
        }
        else
        {
            cout << "Operation Not Possible with current set of Input !! Program will end now \n";
        }
    }
    break;
    case 'B':
    {
        if (b == c)
        {   input(a,b,c,d);
            for (int i = 0; i < a; ++i)
            {
                for (int j = 0; j < d; ++j)
                {
                    final[i][j] = 0;
                }
            }
            for (int i = 0; i < a; ++i)
            {
                for (int j = 0; j < d; ++j)
                {
                    for (int k = 0; k < a; ++k)
                    {
                        final[i][j] += first[i][k] * second[k][j];
                    }
                }
            }
            display(final, a, d);
        }
        else
        {
            cout << "Operation not possible with current set of Input !! Program will end now \n";
        }
    }
    break;
    default:
        cout << "Invalid Choice !! Exiting from the program ";
        exit(0);
        break;
    }
    return 0;
}

int input(int a , int b , int c , int d)
{
     cout << "Enter the Elements of the First Matrix : \n";
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    cin >> first[i][j];
                }
            }
            cout << "Your Input Matrix(First) : \n";
            display(first, a, b);
            cout << "Enter the Elements of the Second Matrix : \n";
            for (int i = 0; i < c; i++)
            {
                for (int j = 0; j < d; j++)
                {
                    cin >> second[i][j];
                }
            }
            cout << "Your Input Matrix(Second) : \n";
            display(second, a, b);
            cout << "Final Resultant Matrix is : \n";
            return 0;
}
