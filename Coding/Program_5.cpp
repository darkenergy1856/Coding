// Write a program to merge two ordered arrays to get a single ordered array.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("CLS");
    int primary[50], secondary[50], final[100], m, n;
    cout << "Enter the length of First Array.\n";
    cin >> n;
    cout << "Enter the element in the Array.\n ";
    for (int i = 0; i < n; i++)
    {
        cin >> primary[i];
    }
     cout<<"Enter the length of Second Array.\n";
    cin>>m;
    cout<<"Enter the element in the Array.\n ";
    for (int i = 0; i < m ; i++)
    {
        cin>>secondary[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (primary[i] > primary[j])
            {
                int t = primary[i];
                primary[i] = primary[j];
                primary[j] = t;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (secondary[i] > secondary[j])
            {
                int t = secondary[i];
                secondary[i] = secondary[j];
                secondary[j] = t;
            }
        }
    }
    for (int k = 0; k < n ; k++)
    {
        final[k]=primary[k];
    }
    int v=0;
    for(int k = n;k<m+n;k++)
    {
        final[k]=secondary[v];
        v++;
    }
    for (int i = 0; i < m+n; i++)
    {
        for (int j = i + 1; j <m+n; j++)
        {
            if (final[i] > final[j])
            {
                int t = final[i];
                final[i] = final[j];
                final[j] = t;
            }
        }
    }
    
    cout<<"Final Array is : \n";
    for (int i = 0; i <m+n; i++)
    {
        cout <<final[i] << "\n";
    }

    return 0;
}
