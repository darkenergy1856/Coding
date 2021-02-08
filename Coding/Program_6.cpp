// Write a program to perform Binary Search (a) With Recursion  (b) Without Recursion
#include <iostream>
#include <conio.h>
using namespace std;

bool v = false;
int display(int find, int address, bool v);
int bolleansearch(int array[], int low, int high, int find, bool v);

int main()
{
    system("cls");
    int array[100], low, high, address, length, temp, find;
    char choice;
    cout << "Enter the No. of elements in an array. \n";
    cin >> length;
    cout << "Enter the element(s):\n";
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    cout << "Enter the No. you want to find. \n";
    cin >> find;
    cout << "Please Enter your choice for the method of sorting.(Enter your choice in capital letter.)\n"
         << "(a) With Recursion \n"
         << "(b) Without Recursion \n";
    cin >> choice;
    cout << choice;
    switch (choice)
    {
    case 'A':
    {
        low = 0;
        high = length;
        bolleansearch(array, low, high, find, v);
        break;
    }

    case 'B':
    {
        low = 0;
        high = length;
        while (low <= high)
        {
            int m = low + (high - 1) / 2;
            if (array[m] == find)
            {
                v = true;
                display(find, m, v);
                exit(0);
            }
            else
            {
                if (array[m] > find)
                {
                    high = m - 1;
                }
                else
                {
                    low = m + 1;
                }
            }
        }
        break;
    }

    default:
        cout << "Invalid choice !! Program will exit now. ";
        exit(0);
    }
    return 0;
}

int display(int find, int address, bool v)
{
    if (v == true)
    {
        cout << "\nThe no. " << find << " was found at " << address + 1 << " position .";
    }
    else
    {
        cout << "\nEntered element not present in this Array";
    }
    /* switch (v)
    {
    case 1:
        cout << "\nThe no. " << find << " was Found at " << address + 1 << " position .";
        break;
    default:
        cout << "\nEntered element not present in this Array";
        break;
     } */
    return 0;
}
int bolleansearch(int x[], int low, int high, int find, bool v)
{
    int m = (low + high) / 2;
    cout<<"Entering to Boolean Search";
    if (x[m] == find)
    {
        v = true;
        display(find, m, v);
    }
    else
    {
        v = false;
        if (x[m] < find)
        {
            low = m + 1;
        }
        else
        {
            high = m - 1;
        }
    }
    bolleansearch(x, low, high, find, v);
    return 0;
}