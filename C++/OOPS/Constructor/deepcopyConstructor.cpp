/*
deep constructor or deep copy
i create creating user defined copy constructor for object and it
will not share their memory location
both will have different addresses
*/

#include <bits/stdc++.h>
using namespace std;

class A
{
    char *str;

public:
    A()
    {
    }

    A(const char *s)
    {
        str = new char[16];
        strcpy(str, s);
    }
    // creating user defined copy constructor
    A(const A &temp)
    {
        str = new char[16];
        strcpy(str, temp.str);
    }
    ~A()
    {
        delete[] str;
    }

    void print()
    {
        cout << str << endl;
    }

    void concatenate(const char *s)
    {
        strcat(str, s);
    }
};

int main()
{
    A o("hello");
    A o2 = o; // copy contructor called(default by c++ compilier)

    cout << "before concatinate" << endl;

    o.print();
    o2.print();

    o.concatenate(" world");

    cout << "after concatinate" << endl;
    o.print();
    o2.print(); // not changed

    return 0;
}
