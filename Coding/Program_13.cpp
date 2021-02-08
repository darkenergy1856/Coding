/* Create a class Student containing fields for Roll No., Name, Class, Year and Total
Marks. Write a program to store 5 objects of Student class in a file. Retrieve these records
from file and display them. */


#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <string.h>
using namespace std;

class Student
{
private:
    int rollno, standard, year, totalmarks;
    char name[20];

public:
    int inputrecord();
    int displayrecord();
};

int Student::inputrecord()
{
    ofstream studentrecord("records.txt", ios::app);
    cout << "Enter the Record of Student : \n"
         << "Enter Roll No. \n";
    cin >> rollno;
    studentrecord <<"Student Roll No. : "<< rollno <<"\n";
    cin.get();
    cout << "Enter Student Name. \n";
    gets(name);
    studentrecord <<"Student Name : "<< name <<"\n" ;
    cout << "Enter Student Class. \n";
    cin >> standard;
    studentrecord <<"Student Class : "<< standard <<"\n" ;
    cout << "Enter Current Year. \n";
    cin >> year;
    studentrecord <<"Student Current Academic year : " << year <<"\n";
    cout << "Enter Total Marks Obtained by the Student. \n";
    cin >> totalmarks;
    studentrecord <<"Total Marks Obtained by the Student : "<<totalmarks <<"\n" ;
    studentrecord.close();
    cout << "All Record succesfully saved.\n";
    return 0;
};
int Student::displayrecord()
{
    ifstream studentrecord("records.txt");
    string output;
    cout<<"Displaying available records: \n";
    while (getline(studentrecord, output))
    {
        cout << output<<"\n";
    }
    studentrecord.close();
    return 0;
}
int main()
{
    system("cls");
    Student record;
    char choice;
    int cont = 0;
    do
    {
        cout << "Select the opertion you want to Perform. \n"
             << "(a). Create New Record. \n"
             << "(b). Display existing record. \n\n"
             << "Enter Your Choice. \n\n";
        cin >> choice;
        choice = toupper(choice);
        if (choice == 'A')
        {
            record.inputrecord();
        }
        else
        {
            if (choice == 'B')
                record.displayrecord();
            else
            {
                cout << "Invalid Choice.\n";
                exit(0);
            }
        }
        cout << "\n\nEnter 1 to continue or press any other key to exit. \n";
        cin >> cont;
    } while (cont == 1);
    return 0;
}