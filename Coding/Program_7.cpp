// Write a program to calculate GCD of two numbers (i) with recursion (ii) without recursion .

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int gc(int a, int b);

int main()
{
    system("CLS");
    int a, b, low, gcd;
    char choice;
    cout << "Enter the First Number : \n";
    cin >> a;
    cout << "Enter the Second Number : \n";
    cin >> b;
    if (a > b)
    {
        low = b;
    }
    else
    {
        low = a;
    }
    cout << "Select the method through which you want to calculate the GCD of two number \n"
         << "(a) With Recursion \n"
         << "(b) Without Recursion \n";
    cin >> choice;
    choice = toupper(choice);
    switch (choice)
    {
    case 'A':
    {
        cout<<"GCD of "<<a<<" and "<<b<<" is "<<gc(a, b);
    }
    break;
    case 'B':
        for (int i = 1; i <= low; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        cout << "GCD of Two Number " << a << " and " << b << " is " << gcd;
        break;
    }
    
    return 0;
}

int gc(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gc(a - b, b);
    return gc(a, b - a);
}