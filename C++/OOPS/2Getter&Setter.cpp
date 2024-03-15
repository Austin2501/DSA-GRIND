//Getters & Setters
/* Used for Data Protection, Code Readability, Encourages code reuse*/


#include<iostream>
using namespace std;
 class rectangle{

    private:
    int length, breadth;

    public:

    //setters
    void setlength(int len){
        length = len;
    }
    void setbreadth(int bre){
        breadth =bre;
    }

    //getters
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }

    int area(){

        return length*breadth;
    }
 };

 int main(){

    rectangle recObj;
    recObj.setlength(10);
    recObj.setbreadth(20);

    cout<< "Length is: "<<recObj.getlength()<<endl;
    cout<< "Breadth is: "<<recObj.getbreadth()<<endl;

    //cout<< "The area of Rectangle is: "<< recObj.length*recObj.breadth <<endl;
    cout<< "The area of Rectangle is: "<< recObj.area() <<endl;

    return 0;

 }
