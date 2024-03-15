#include <iostream>
using namespace std;
class rectangle
{

private:
        int length, breadth;

public:
        // setters
        void setlength(int len);

        void setbreadth(int bre);

        // getters
        int getlength();

        int getbreadth();

        int area();
};

void rectangle ::setlength(int len)
{
        length = len;
}

void rectangle ::setbreadth(int bre)
{
        breadth = bre;
}

int rectangle ::getlength()
{
        return length;
}

int rectangle ::getbreadth()
{
        return breadth;
}

int rectangle ::area()
{

        return length * breadth;
}

int main()
{

        rectangle recObj;
        recObj.setlength(10);
        recObj.setbreadth(20);

        cout << "Length is: " << recObj.getlength() << endl;
        cout << "Breadth is: " << recObj.getbreadth() << endl;

        // cout<< "The area of Rectangle is: "<< recObj.length*recObj.breadth <<endl;
        cout << "The area of Rectangle is: " << recObj.area() << endl;

        return 0;
}
