#include<iostream>
using namespace std;

class A{
private:
    int x,y;

public:
    //if i create any constructor atleast i should create default constructor
    //else it may give error
    //compilier does not create its own constructor

    A(){
        cout<< " default constructor called" << endl;
    }

    A(int x1, int y1){
        x = x1;
        y = y1;

        cout<< "Parameterized constructor called" << endl;
    }

     //copy constructor
     A(const A &p1){
     x=p1.x;
     y=p1.y;

     cout<<"copy constructor was called" <<endl;
     }
     int getX(){
        return x;
     }

     int getY(){
        return y;
     }
};

int main(){
    A p1(10,20);
    A p2(p1);
    A p3 = p1;


    A p4;

    // assignment happens
    p4 = p1;

    cout << "p1.x = " << p1.getX() <<" p1.y = " << p1.getY() <<endl;
    cout << "p2.x = " << p2.getX() <<" p2.y = " << p2.getY() <<endl;
    cout << "p3.x = " << p3.getX() <<" p3.y = " << p3.getY() <<endl;
    cout << "p4.x = " << p4.getX() <<" p4.y = " << p4.getY() <<endl;
    //in 4th case, only assignment works
    //p1 values assign to p4

}
