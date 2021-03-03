/* Create a class Triangle. Include overloaded functions for calculating area. Overload
assignment operator and equality operator. */


#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{   
    float area=0;
    public:

    void calculate(int side1)
    {
        area=0.433012702*side1*side1;
    }

    void calculate(int side1,int side2)
    {
        float s1,s2;
        area=0.5*s1*s2;
    }

    void calculate(int side1,int side2, int side3)
    {
        float s1,s;
        s1 = (side1+side2+side3);
        s=s1/2;
        area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }
    void display()
    {
        cout<<"Area of Trinagle is:\n"<<area<<"\n";
    }
};

int main()
{
    int side1,side2,side3;
    float area;
    char choice;
    Triangle A;
    cout<<"Select the type of triangle you want to calculste area for:\n"<<"[E]quilateral\n"<<"[S]caler\n"<<"[R]ight Angle\n";
    cin>>choice;
    switch (choice)
    {
        case 'E':
        cout<<"Enter the side of triangle:\n";
        cin>>side1;
        A.calculate(side1);
        break;

        case 'S':
        cout<<"Enter the side(s) of triangle in order:\n";
        cin>>side1>>side2>>side3;
        A.calculate(side1,side2,side3);
        break;

        case 'R':
        cout<<"Enter base and height of Right angled Traingle:\n";
        cin>>side1>>side2;
        A.calculate(side1,side2);
        break;

        default:
        cout<<"Invalid Choice.\n";
        exit(0);
        break;

    }
    A.display();
    return 0; 
}