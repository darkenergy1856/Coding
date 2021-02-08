#include <iostream>
#include <conio.h>
using namespace std;
int c[8];

int *merge(int a[], int s1, int b[], int s2)
{
    int i = 0, j = 0, k = 0;
    while (i < s1 && j < s2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    if (i >= s1)
    {
        while (j < s2)
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    if (j >= s2)
    {
        while (i < s1)
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
    return c;
}

void display(int *a, int s1)
{
    for (int i = 0; i < s1; i++)
    {
        cout << *(a + i);
    }
}
int main()
{
    system("cls");
    int a[] = {2, 3, 5, 6};
    int b[] = {1, 2, 9, 10};
    int *z;
    z = merge(a, 4, b, 4);
    display(z, 8);
    return 0;
}