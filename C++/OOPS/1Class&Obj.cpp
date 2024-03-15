#include<iostream>
using namespace std;
 class rectangle{

    public:
    int length, breadth;

    int area(){

        return length*breadth;
    }
 };

 int main(){

    rectangle recObj;
    recObj.length =10;
    recObj.breadth =20;

    //cout<< "The area of Rectangle is: "<< recObj.length*recObj.breadth <<endl;
    cout<< "The area of Rectangle is: "<< recObj.area() <<endl;

    return 0;

 }
