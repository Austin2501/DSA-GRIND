// Static Member Functions:

// A static member function belongs to the class rather than an instance of the class.
// It can be called using the class name, without creating an object of the class.
// It cannot access non-static members (variables or functions) directly because it does not operate on a specific instance of the class.
// It is often used for operations that don't depend on specific object instances, like utility functions or operations on class-level data.

// Non-Static (Instance) Member Functions:

// A non-static member function operates on a specific instance of the class.
// It has access to both static and non-static members of the class.
// It is called using an object of the class.
// It can modify the state of the object it is called on.

// In summary, static member functions operate at the class level and 
// don't depend on a specific object instance, while non-static member 
// functions operate on specific instances of the class and have access to 
// both static and non-static members.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class MyClass {
public:
    static void staticFunction() {
        // This is a static member function
        // Can be called using MyClass::staticFunction();
        cout<<"Hi I'm Static."<<endl;
    }

    void nonStaticFunction() {
        // This is a non-static member function
        // Can be called using an object: obj.nonStaticFunction();
        cout<<"Hi I'm Non-Static."<<endl;
    }
};


int main() {
    // Using static member function
    MyClass::staticFunction();

    // Using non-static member function
    MyClass obj;
    obj.nonStaticFunction();

    return 0;
}
