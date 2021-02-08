#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    system("cls");
    int array[100], n, count = 0, i, j, secondary[100], v = 0;
    cout << "Plz enter the no. of element in array \n";
    cin >> n;
    cout << "Plz enter values in array \n";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        secondary[i] = 0;
    }
    for (int k = 0; k < n; k++)
    {
        int d = 0;
        int find = array[k];
        for (int f = 0; f < n; f++)
        {
            if (secondary[f] == find)
            {
                d = d + 1;
            }
        }
        if (d == 0)
        {
            secondary[v] = find;
            v++;
        }
    }
    cout << "All duplicates Removed \n"
         << "No. of duplicate values = " << n - v << "\n"
         << "Final Length of array = " << v << "\n"
         << "Your New Array is\n";
    for (i = 0; i < v; i++)
    {
        cout << secondary[i] << "\n";
    }
    return 0;
}