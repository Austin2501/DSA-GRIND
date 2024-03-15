/*
#include<iostream>
using namespace std;

class A{
    int i;
    public:
        //default constructor
        A(){
            i=1;
            cout<<"the constructor was called"<<endl;
        }

    int getI(){
    return i;
    }
};

int main(){
    //memory is created

    A a_obj;
    cout<<"the value of i is: "<<a_obj.getI()<<endl;

    return 0;
}
*/

// if you don't create constructors then compiler creates its own constructors
//and gives default value 0 or some gives garbage value
#include<iostream>
using namespace std;

class A{
    int i;
    public:
        //default constructor
        A();

};
A :: A(){
    i=1;
    cout<<"the constructor was called & i value initialised to: "<< i<<endl;
}

int main(){
    //memory is created

    A a_obj;

    return 0;
}
