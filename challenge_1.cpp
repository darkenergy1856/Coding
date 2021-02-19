// Program to perform Addition and Multiplication on two Complex Number using operator overloading .

#include <iostream>
#include <conio.h>

using namespace std;

class comp
{

private:
    double real, imaginary;

public:
    // Initialization of the value;

    comp(double r = 0, double i = 0)
    {
        real = r;
        imaginary = i;
    }

    // Constructor for Addition.

    comp operator+(comp obj)
    {

        comp final;

        final.real = real + obj.real;

        final.imaginary = imaginary + obj.imaginary;

        return final;
    }

    // Constructor for Multiplication.

    comp operator*(comp obj)
    {

        comp final;
        final.real = (real * obj.real) - (imaginary * obj.imaginary);
        final.imaginary = (real * obj.imaginary) + (imaginary * obj.real);
        return final;
    }

    comp operator-(comp obj)
    {

        comp final;

        final.real = real - obj.real;

        final.imaginary = imaginary - obj.imaginary;

        return final;
    }

    comp operator/(comp obj)
    {

        comp final;

        final.real = ((real * obj.real) + (imaginary * obj.imaginary)) / ((obj.real * obj.real) + (obj.imaginary * obj.imaginary));

        final.imaginary = ((imaginary * obj.real) - (real * obj.imaginary)) / ((obj.real * obj.real) + (obj.imaginary * obj.imaginary));

        return final;
    }

    // Display function.

    void display()
    {
        cout << "Final Result is:\n";
        cout << real << " + " << imaginary << "i ";
    }
};

char input(char &choice)
{
    cin >> choice;
    if (!(choice == 's' || choice == 'S' || choice == 'p' || choice == 'P' || choice == 'a' || choice == 'A' || choice == 'd' || choice == 'D'))
    {
        cout << "You entered wrong operation.Enter again :\n";
        input(choice);
    }
    return choice;
}

int main()
{
    system("cls");
    double x, y, z, w;
    char choice;

    cout << "Enter the first complex No. (real part first):\n";
    cin >> w >> x;

    cout << "Enter the second complex No. (real part first):\n";
    cin >> y >> z;

    cout << "Enter your choice either (A)ddition , (P)roduct , (S)ubtraction or (D)ivision:\n";
    choice = input(choice);
    comp c1(w, x), c2(y, z);

    comp c3;

    switch (choice)
    {

    case 'a':
        c3 = c1 + c2;
        c3.display();
        break;

    case 's':
        c3 = c1 - c2;
        c3.display();
        break;

    case 'p':
        c3 = c1 * c2;
        c3.display();
        break;

    case 'd':
        if (((y * y) + (z * z)) == 0)
        {
            cout << "This operation is not possible with current set of input.Program will edit now.\n";
            exit(0);
        }
        else
        {
            c3 = c1 / c2;
            c3.display();
        }
        break;
        
    case 'A':
        c3 = c1 + c2;
        c3.display();
        break;

    case 'S':
        c3 = c1 - c2;
        c3.display();
        break;

    case 'P':
        c3 = c1 * c2;
        c3.display();
        break;

    case 'D':
        if (((y * y) + (z * z)) == 0)
        {
            cout << "This operation is not possible with current set of input.Program will exit now.\n";
            exit(0);
        }
        else
        {
            c3 = c1 / c2;
            c3.display();
        }
        break;
    }
    return 0;
}
