#include <iostream>
using namespace std;

class parent{
public:
    parent(){
        cout<<"Parent class constructor\n";// 1st construction this/ 1st precedence
    }

    ~parent(){
        cout<<"Parent class destructor\n";// 3rd destruction
    }
};

class child: public parent{
public:
    child(){
        cout<<"child class constructor\n"; //2nd construction
        }

    ~child(){
        cout<<"child class destructor\n"; //2nd destruction or 5rd precedence
    }
};
class grandchild: public child{
public:
    grandchild(){
        cout<<"grandchild class constructor\n"; //3nd construction
        }

    ~grandchild(){
        cout<<"grandchild class destructor\n"; //1st destruction or 4rd precedence
    }
};

int main(){
    grandchild obj;
    //automatically executes all grandchild, child and parent class
    // constructor and destructors because of inheritence

    return 0;
}
