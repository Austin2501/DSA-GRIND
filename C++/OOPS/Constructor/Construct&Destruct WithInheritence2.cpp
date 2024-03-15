#include <iostream>
using namespace std;

class parent{
    int x;
public:
    parent(int i){
        x=i;
        cout<<"value of x is: "<< x <<" Parent class constructor\n";// 1st construction this/ 1st precedence
    }

    ~parent(){
        cout<<"Parent class destructor\n";
    }
};

class child: public parent{
    int y;
public:
    child(int a): parent(a){
        y=a;
        cout<<"value of y is: "<< y <<" child class constructor\n";
    }
    ~child(){
        cout<<"child class destructor\n";
    }

};


int main(){
    child obj(10);
    //automatically executes all grandchild, child and parent class
    // constructor and destructors because of inheritence

    return 0;
}
