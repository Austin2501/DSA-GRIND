#include<bits/stdc++.h>
using namespace std;

class A{

    public:
        int i;
        float f;

        A(int val, float val2){

            i =val;
            f =val2;
        }
};

int main(){

    //parameterised constructors
    A a(100, 1.0);
    A b(200, 2.0);

    cout<<a.i << " & "<<fixed<<setprecision(1)<< a.f <<endl;
    cout<<b.i << " & "<<fixed<<setprecision(1)<< b.f <<endl;


    return 0;
}
