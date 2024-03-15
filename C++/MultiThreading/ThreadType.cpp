// # if we create multiple threads at the time it doesn't guarantee which one wll start first


#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

// 1. Function Pointer
// This is the very basiz form of thread creation

/*
void fun(int x){
    while (x --> 0){
        cout<<x<<endl;
    }
}

int main(){
    thread t1(fun, 11);
    t1.join();
    return 0;
}
*/

// 2. Lambda Function
// A lambda function in programming, particularly in languages like C++, 
// Python, and others, is an anonymous function defined inline, without 
// the need for a separate named function. Lambda functions are often 
// used for short, simple operations.



/*
int main(){

    // auto fun = [](int x){
    //     while (x-->0){
    //         cout<<x<<endl;
    //     }
    // };

    // we can directly inject lambda at thread creation time
    std::thread t([](int x){
        while (x-->0){
            cout<<x<<endl;
        }
    }, 11);

    //std::thread t(fun, 11);

    t.join();
    return 0;
}
*/

// 3. Functor (Function Object)

// In C++, a functor is an object that can be called as if it were a 
// function. Functors are instances of classes or structures that overload 
// the operator() (function call operator). They provide a way to create 
// objects that can be invoked like functions, offering a more flexible 
// alternative to function pointers.

/*
class Base {
    public:
        void operator ()(int x){
            while (x-->0){
                cout<<x<<endl;
            }
        }
};

int main(){
    std::thread t((Base()), 11);
    t.join();
    return 0;
}
*/

// 4. Non-static member function

//  &Base::run is used to pass the member function run to the thread, 
//  and &b is used to pass the instance of the class b as the first 
//  argument to the member function. The last argument 11 is the argument 
//  passed to the run function.
// 

/*
class Base{
    public:
        void run(int x){
            while(x-->0){
                cout<<x<<endl;
            }
        }
};

int main(){
    Base b; //need object to call non static member funvtion
    std::thread t(&Base::run, &b, 11);
    t.join();
    return 0;
}
*/

// 5. Static member function

class Base{
    public:
        static void run(int x){
            while(x-->0){
                cout<<x<<endl;
            }
        }
};

int main(){
    std::thread t(&Base::run, 11); // no need to create sn object to call static function
    t.join();
    return 0;
}