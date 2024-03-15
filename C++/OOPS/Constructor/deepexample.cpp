
#include<bits/stdc++.h>
using namespace std;

class A {
    int* ptr;

public:
    A(){

    }

    A(int x){
        ptr = new int;
        *ptr = x;
    }

    A(const A &obj1){
        ptr = new int;
        *ptr = *obj1.ptr;
    }

    void multiply(int num2){
        *ptr = *ptr*num2;
    }

    void print(){
        cout<< *ptr <<endl;
    }
    ~A(){
        delete ptr;
    }
};

int main()
{
    A obj1(10);
    A obj2 = obj1;

    cout<< " before multiplication"<< endl;
    obj1.print();
    obj2.print();

    obj1.multiply(30);

    cout<< " after multiplication"<< endl;
    obj1.print();
    obj2.print();

    return 0;
}
