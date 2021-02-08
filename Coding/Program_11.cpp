#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   
    system("cls");
    float p,q; 
    cout<<"Please Enter First Number (P): \n";
    cin>>p;
    cout<<"Please Enter Second Number (Q): \n";
    cin>>q;
    if (q == 0)
    {
        cout<<"Invalid input !! Denominator can't be zero. ";
    }
    cout<<"Result of P by Q is : \n"<<p/q;
    return 0;
}