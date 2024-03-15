//  conversion constructor allows us to call a constructor implicitly
// constructor can be called using 1 argument
#include<iostream>
using namespace std;

class A{
    int x, y;
    public:
        void display(){
            cout<<"the values of "<< x << " & "<< y << endl;
        }
        // at time of parameterized constructor definition,
        //i am initializing one of the values.
        //either 0 or at max 1 argument non initialized
        A(int a, int b=0){
            x=a;
            y=b;
        }
        //valid
        //A(int a);
        //A(int a=0);
        //A(int a=0, int b=0);
        //A(int a, int b=0);

        //invalid
        //A(int a=0, int b);
        //A(int a, int b);

};


int main(){

    // basic parameterised constructor with one parameter passed
    A obj(10); // A obj(10,30);
    obj.display();

    //implicit calling using assignment operator(overloading concept)
    // conversion constructor
    obj =100; //obj={100,200};
    obj.display();

    return 0;
}
