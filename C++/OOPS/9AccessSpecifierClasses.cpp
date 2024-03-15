#include <iostream>
using namespace std;

class A{

public:
    int x;

protected:
    int y;

private:
    int z;

    // all are accessible
};

class B: public A{

    /*
    x is inherited & stays public in child
    y is inherited & stays protected in child
    z is not inherited & not accessible
    */
};

class C: protected A{

    /*
    x is inherited but becomes protected
    y is inherited & stays protected in child
    z is not inherited
    */
};

class D: private A{

    /*
    x is inherited but becomes private
    y is inherited & becomes private
    z is not inherited
    */
};

int main(){

A a;
B b;
C c;
D d;

a.x= 1; //works as x is public
a.y=1; //does't work as y is protected
a.z=1; //does't work as z is private

b.x=1; //works as x is public in class B
b.y=1; //does't work as y is protected in class B
b.z=1; //does't work as z is not inherited

c.x=1; //doesn't work as x is protected in class C
c.y=1; //doesn't work as y is protected in class C
c.z=1; //doesn't work as z is not inherited

d.x=1; //doesn't work as x is private in class D
d.y=1; //doesn't work as y is private in class D
d.z=1; //doesn't work as z is not inherited

}
