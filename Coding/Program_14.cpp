// Copy the contents of one text file to another file, after removing all whitespaces.

#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{   
    system("cls");
    char in[50], out[50];
    char word;
    string hello;
    cout << "Enter the file name from which you want to copy.(With file name extension.) \n";
    cin >> in;
    cout << "Enter the file name to which you want to copy.(With file name extension.) \n";
    cin >> out;
    ifstream input(in);
    ofstream output(out, ios::app);
    while (input >> word)
    {
        output << word;
    }
    output.close();
    input.close();
    ifstream display(out,ios::in);
    while (display >> hello)
    {
        cout<<hello;
    }
    display.close();
    return 0;
}