#include <iostream>
#include <conio.h>

using namespace std;

class comp
{

private:
    int real, imaginery;

public:
    comp(int r = 0, int i = 0)
    {
        real = r;
        imaginery = i;
    }

    comp operator+(comp obj)
    {

        comp final;

        final.real = real + obj.real;

        final.imaginery = imaginery + obj.imaginery;

        return final;
    }
    comp operator*(comp obj)
    {

        comp final;
        final.real = (real * obj.real) - (imaginery * obj.imaginery);
        final.imaginery = (real * obj.imaginery) + (imaginery * obj.real);
        return final;
    }

    void display()
    {
        cout << "Final Result is:\n";
        cout << real << " + " << imaginery << "i" << endl;
    }
};

int main()
{
    int x, y, z, w;
    string choice;

    cout << "Enter the first complex No. (real part firts):\n";
    cin >> w >> x;

    cout << "Enter the second complex No. (real part first):\n";
    cin >> y >> z;

    cout << "Enter your choice either (S)um or (P)roduct.\n";
    cin >> choice;
    comp c1(w, x), c2(y, z);

    if (choice == "s" || choice == "S")
    {
        comp c3 = c1 + c2;
        c3.display();
    }

    if (choice == "p" || choice == "P")
    {
        comp c3 = c1 * c2;
        c3.display();
    }

    return 0;
}
