/*
polymorphism = many forms
2 types

1. compile time
1(a). Function Overloading
1(b). Operator Overloading
properties==> static/early binding

2. Runtime
2(a). Function Overriding(Virtual Function)
properties==> dynamic/late binding
*/

// Function Overloading
//pros
//1. code readability  and function naming less
//2. reuse of code

#include<bits/stdc++.h>
using namespace std;

class A {
    int x, y;
    double z;
public:

    void print(){
        cout<< "nothing to print, no argument passed"<<endl;
    }

    void print(int a){
        x=a;
        cout<< "the value to be printed "<<x<<endl;
    }

    void print(double a){
        z=a;
        cout<< "the value to be printed "<<fixed<<setprecision(5)<<z<<endl;
    }

    void print(int a, int b){
        x=a;
        y=b;
        cout<< "the value to be printed "<<x<< " & "<<y<<endl;
    }
    void sum(int a, int b){
        x=a;
        y=b;
        cout<< "the sum to be printed "<<x + y<<endl;
    }
};

int main(){
    A obj;
    obj.print();
    obj.print(10);
    obj.print(50.00000);
    obj.print(10,20);
    obj.sum(10,20);

    return 0;
}
