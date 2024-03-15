// #include <bits/stdc++.h>
// using namespace std;

// class A
// {
//     int x = 0, y = 0, z = 0;

// public:
//     void print()
//     {
//         cout << x << y << z << endl;
//     }
//     void operator++() // operator overloading
//     {
//         // x++;
//         // y++;
//         // z++;

//         x += 100;
//         y++;
//         z--;
//     }
// };

// int main()
// {

//     A Ob;

//     Ob.print();

//     ++Ob; // there is no such library written in c++to increment an object

//     Ob.print();
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {
//     int real, imag;

// public:
//     void print()
//     {
//         if (imag < 0)
//         {
//             cout << real << imag << "j" << endl;
//         }
//         else
//         {
//             cout << real << "+" << imag << "j" << endl;
//         }
//     }

//     void getData()
//     {
//         cin >> real >> imag;
//     }
//     void operator++() // operator overloading
//     {
//         real++;
//         imag++;
//     }
// };

// int main()
// {

//     Complex Ob;
//     Ob.getData();

//     Ob.print();

//     ++Ob; // there is no such library written in c++to increment an object

//     Ob.print();
// }

// Urinary Operator Overloading
// #include <bits/stdc++.h>
// using namespace std;

// class AddString
// {
// public:
//     char string1[20], string2[20];

//     void operator+()
//     {
//         cout << "After Concatenation: " << strcat(string1, string2);
//     }
// };

// int main()
// {
//     AddString Obj1;
//     strcpy(Obj1.string1, "Hello");
//     strcpy(Obj1.string2, "World");

//     +Obj1;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imag;

public:
    void print()
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

    void getData()
    {
        cin >> real >> imag;
    }

    void operator++() // operator overloading
    {
        real++;
        imag++;
    }

    void operator++(int) // operator overloading
    {
        ++real;
        ++imag;
    }
};

int main()
{

    Complex Ob;
    Ob.getData();

    Ob.print();

    ++Ob;
    Ob.print();
    Ob++; // there is no such library written in c++to increment an object

    Ob.print();
}