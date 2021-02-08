/* Write a menu driven program to perform following operations on strings (without using inbuilt string functions):
a) Show address of each character in string.(Completed)
b) Concatenate two strings.(Completed)
c) Compare two strings.(Completed)
d) Calculate length of the string (use pointers).(Completed)
e) Convert all lowercase characters to uppercase.(Completed)
f) Reverse the string.(Completed) */

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int address(char primary[100]);
int add(char primary[100]);
int compare(char primary[100]);
int length(char primary[100]);
int converter(char primary[100]);
int reverse(char primary[100]);

int main()
{
    system("CLS");
    int i;
    char hello[100], choice;
    cout << "Enter the Text.\n";
    gets(hello);
    cout << endl;
    cout << "Choose the operation you want to perform.\n"
         << "a) Show address of each character in string.\n"
         << "b) Concatenate two strings.\n"
         << "c) Compare two strings.\n"
         << "d) Calculate length of the string.\n"
         << "e) Convert all lowercase characters to uppercase.\n"
         << "f) Reverse the string.\n"
         << endl;
    i = length(hello);
    cin >> choice;
    cin.get();
    switch (choice)
    {
    case 'a':
        address(hello);
        break;
    case 'b':
        add(hello);
        break;
    case 'c':
        compare(hello);
        break;
    case 'd':
        length(hello);
        cout << "The length of string is " << i;
        cout << "\nNote : This program consider space as character.\n";
        break;
    case 'e':
        converter(hello);
        break;
    case 'f':
        reverse(hello);
        break;
    case 'A':
        address(hello);
        break;
    case 'B':
        add(hello);
        break;
    case 'C':
        compare(hello);
        break;
    case 'D':
        length(hello);
        cout << "The length of string is " << i;
        cout << "\nNote : This program consider space as character.\n";
        break;
    case 'E':
        converter(hello);
        break;
    case 'F':
        reverse(hello);
        break;
    default:
        cout << "Plz enter a valid choice";
        break;
    }
    return 0;
}

int add(char primary[100])
{
    char secondary[100], final[200];
    int i = 0, j = 0, k = 0, l, m;
    l = length(primary);
    cout << "Enter Second Line of Text.\n";
    gets(secondary);
    m = length(secondary);
    while (primary[i] != '\0')
    {
        final[i] = primary[i];
        i++;
    }
    j = i + 1;
    final[j - 1] = ' ';
    do
    {
        final[j] = secondary[k];
        j++;
        k++;
    } while (secondary[k] != '\0');
    cout << "The Final String is : ";
    for (int n = 0; n < (l + m) + 1; n++)
    {
        cout << final[n];
    }

    return 0;
}

int length(char primary[100])
{
    int i = 0;
    char *ptr = primary;
    while (*ptr != '\0')
    {
        ptr++;
        i++;
    }
    return i;
}

int reverse(char primary[100])
{
    char secondary[100];
    int n = length(primary);
    for (int i = 0; i <n; i++)
    {
        secondary[i]=primary[n-i-1];
    }
    cout << "The Reversed String is : " << secondary;
    return 0;
}
int compare(char primary[100])
{
    char secondary[100];
    int n, m, s = 0;
    cout << "Enter the second String :\n";
    gets(secondary);
    n = length(primary);
    m = length(secondary);
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            if (primary[i] != secondary[i])
            {
                s++;
            }
        }
        if (s == 0)
        {
            cout << "Both Stirngs are same.\n";
        }
        else
        {
            cout << "Both Strings are different.\n";
        }
    }
    else
    {
        cout << "Both Strings are different.\n";
    }
    return 0;
}

int converter(char primary[100])
{
    const char alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", alphabet2[27] = "abcdefghijklmnopqrstuvwxyz";
    char secondary[100];
    int up, count = length(primary);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (primary[i] == alphabet2[j])
            {
                primary[i] = alphabet[j];
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout << primary[i];
    }

    return 0;
}

int address(char primary[100])
{
    char *ptr[100];
    for (int i = 0; i < length(primary); i++)
    {
        ptr[i] = &primary[i];
        cout << "Address of " << i + 1 << " character is " << &ptr[i] << "\n";
    }
    return 0;
}