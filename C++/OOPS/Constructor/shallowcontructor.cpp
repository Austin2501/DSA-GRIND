/*
Shallow constructor or shallow copy
if i don't create copy constructor for object then it
will create its own copy constructor sharing same memory location
*/

#include<bits/stdc++.h>
using namespace std;

class A {
    char *str;
public:
    A(){

    }

    A(const char* s){
        str = new char[16];
        strcpy(str, s);
    }
    ~A(){
        delete [] str;
    }

    void print(){
        cout << str <<endl;
    }

    void concatenate(const char* s){
        strcat(str, s);
    }
};

int main()
{
    A o("hello");
    A o2 = o; // copy contructor called(default by c++ compilier)

    cout<<"before concatinate"<< endl;

    o.print();
    o2.print();

    o.concatenate(" world");

    cout<<"after concatinate"<< endl;
    // i changed 1st object but changes will also be done in 2nd object
    //becoz both shares same address
    o.print();
    o2.print(); //no assignment is there, it's copy construct

    return 0;
}
