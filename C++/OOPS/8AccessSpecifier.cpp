// ACCESS SPECIFIERS

// 1) PUBLIC
/*
#include <iostream>
using namespace std;

class shape{

public:
    int length, breadth;

} ;

class rectangle: public shape{

public:
    int area(){
    return length*breadth;
    }
};

int main(){

    rectangle rec1;
     rec1.length =10;
     rec1.breadth=20;

     cout<<"the area is: "<< rec1.area()<<endl;

     return 0;
}
*/

// 2) PROTECTED

/*
#include <iostream>
using namespace std;

class shape{

protected:
    int length, breadth;

public:
    void setlength(int len){
    length = len;
    }


    void setbreadth(int bre){
    breadth = bre;
    }

} ;

class rectangle: public shape{
// protected members are inherited from parent to child
public:
    int area(){
    return length*breadth;
    }
};

int main(){

    rectangle rec1;
     rec1.setlength (10);
     rec1.setbreadth(20);

     cout<<"the area is: "<< rec1.area()<<endl;

     return 0;
}
*/

// 3) Private

#include <iostream>
using namespace std;

class shape{

public:
    int length, breadth;

} ;

class rectangle: public shape{
// private members are not inherrited

private:// instead of private, protected can also be used when there is no inheritence
    int length, breadth;

public:

    void setlength(int len){
    length = len;
    }

    void setbreadth(int bre){
    breadth = bre;
    }

    int area(){
    return length*breadth;
    }
};

int main(){

    rectangle rec1;
     rec1.setlength (10);
     rec1.setbreadth(20);

     cout<<"the area is: "<< rec1.area()<<endl;

     return 0;
}
