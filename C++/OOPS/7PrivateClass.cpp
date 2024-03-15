
#include<iostream>
using namespace std;
 class rectangle{

    private:
    int length = 10, breadth = 20;

    public:
    int area(){

        return length*breadth;
    }
 };

 int main(){

    rectangle recObj;
    //recObj.length =10; //gives error becoz length is private
    //recObj.breadth =20;

    //cout<< "The area of Rectangle is: "<< recObj.length*recObj.breadth <<endl;
    cout<< "The area of Rectangle is: "<< recObj.area() <<endl;

    return 0;

 }
