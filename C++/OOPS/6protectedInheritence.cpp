 /* // visibility       inside the class      in child class        outside(main)

        public              yes                    yes                  yes

        protected            yes                    yes                 no

        Private             yes                     no                  no

 */

 #include <iostream>
 using namespace std;
 // parent class/ super class/base class
 class parent{

public:
    int var1;
private:
    int var2;
protected:
    int var3;

 };

 // child class/ sub class/ derived class

 class child: public parent{

/* public:
    int var1;    // no need to write because it is already inherited
protected:
    int var3;
*/
 };

 int main(){

 child c;
 c.var1 =10;

 return 0;
 }

