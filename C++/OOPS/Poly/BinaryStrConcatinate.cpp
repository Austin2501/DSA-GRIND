#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    char string[20];

    A operator+(A p2)
    {
        A tempOb;
        strcpy(string, p2.string);
        strcpy(tempOb.string, string);

        return tempOb;
    }
    void display()
    {
        cout << string << endl;
    }
};

int main()
{
    A p1, p2, result;

    char tempstr1[20] = "Hello";
    char tempstr2[20] = "World";

    strcpy(p1.string, tempstr1);
    strcpy(p2.string, tempstr2);

    result = p1 + p2; // in binary we store result in new variable but in urinari we use same object like ++Obj or Obj++

    result.display();

    return 0;
}
