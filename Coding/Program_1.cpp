#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    float n,s=0,e,d;
    int i;
    cout<<"Plz enter the number of terms to continue the series\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        e=i*i;
        d=1/e;
        if(i%2!=0)
        {
         s=s+d;
        }
        else
        {
          s=s-d;
        }
    }
    cout<<"The Value of series is "<<s;
    return 0;
}