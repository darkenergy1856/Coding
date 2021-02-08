#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{   system("CLS");
    const char alphabet[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char string[50];
    int count[27],j,i;
    for(i=0;i<27;i++)
    {
        count[i]=0;
    }
    cout<<"Plz enter the word :\n";
    gets(string);
    int l=strlen(string);
    for(int i=0;i<l;i++)
    {
        string[i]=toupper(string[i]);
    }
    for(i=0;i<l;i++)
    {
        for (j = 0;j<27;j++)
        {
            if (string[i]==alphabet[j])
            {
                count[j]=count[j]+1;
            }
            
        }
        
    }
   
    for(int i=0;i<26;i++)
    {
        cout<<"No. of "<<alphabet[i]<<" is "<<count[i]<<"\n";
    }
    return 0;
}