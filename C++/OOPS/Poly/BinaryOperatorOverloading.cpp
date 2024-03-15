#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getdata()
    {
        cin >> real >> imag;
    }
    Complex operator+(Complex tempOb) // tempOb is Ob2
    {
        cout << "called by object" << real << endl;
        cout << "passed object" << tempOb.real << endl;
        Complex tempResult;
        tempResult.real = real + tempOb.real;
        tempResult.imag = real + tempOb.imag;

        return tempResult;
    }

    void display()
    {
        if (imag < 0)
        {
            cout << real << imag << "j" << endl;
        }
        else
        {
            cout << real << "+" << imag << "j" << endl;
        }
    }
};

int main()
{

    Complex Ob1, Ob2, result;

    Ob1.getdata();
    Ob2.getdata();

    result = Ob1 + Ob2;

    result.display();

    return 0;
}
