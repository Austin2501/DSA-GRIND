#include<iostream>
using namespace std;

class A{

    public:

        A(){

            cout<<"the constructor was called"<<endl;
        }

        ~A(){

            cout<<"the destructor was called"<<endl;
        }
};

int main(){
    //memory is created

    A a_obj; //constructor called
    int x=1;


    if(x) {
        A obj2; //constructor called
    }//destructor called

    return 0;
}//destructor called
