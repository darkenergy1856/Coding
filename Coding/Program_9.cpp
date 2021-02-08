/*Define a class Person having name as a data member. Inherit two classes Student and
Employee from Person. Student has additional attributes as course, marks and year and
Employee has department and salary. Write display() method in all the three classes to
display the corresponding attributes. Provide the necessary methods to show runtime
polymorphism.*/

#include <iostream>
#include <conio.h>
using namespace std;

class Person
{
public:
    char name[20];
    int input()
    {
        cout << "Enter the Name of the Person.\n";
        cin>>noskipws>>name;
        return 0;
    }
    int display()
    {
        cout << name;
        return 0;
    }
};

class Student : public Person
{
public:
    char course[30];
    int year, marks;
    int input()
    {
        cout << "\nEnter student course.\n";
        cin>>noskipws>>course;
        cout << "Current Session of Student\n";
        cin >> year;
        cout << "Enter Marks Obtained by the Student\n";
        cin >> marks;
        return 0;
    }
    int dislplay(char name[])
    {
        cout << "\nName of Student .\n"
             << name
             << "\nStudent Course: \n"
             << course
             << "\nYear:\n"
             << year
             << "\nMarks obtained by Student:\n"
             << marks;
        return 0;
    }
};
class Employee : public Person
{
public:
    char departement[10];
    long int salary;
};

int main()
{
    system("cls");
    Person x;
    x.input();
    x.display();
    Student y;
    y.input();
    y.dislplay(x.name);
    return 0;
}