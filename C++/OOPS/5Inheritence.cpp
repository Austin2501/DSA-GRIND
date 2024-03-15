/*
Types of Inheritence
Single
MultiLevel |=> derived class inherits from a class which in turn inherits from some other class
Hybrid |=> Combining more than 1 type of Inheritence
Multiple
Hierarchical |=> multiple derived classes from common base class

benefits
--------
1) reuse of code
2) lesser time
3) easy to maintain
4) relaibility
5) complexity of program decreases
6) reduce cost
*/

//Single Inheritance

/*#include <iostream>
using namespace std;

class A{

};

class B: public A{

};

int main(){

    return 0;
}*/

//MultiLevel Inheritance
/*#include <iostream>
using namespace std;

class A{

};

class B: public A{

};

class C: public B{

};

int main(){

    return 0;
}*/

//Multiple Inheritence

/*#include <iostream>
using namespace std;

class A1{

};

class A2{

};

class A3{

};

class B: public A1, public A2, public A3{

};

int main(){

    return 0;
}*/

//Hierarchical Inheritence
/*
#include <iostream>
using namespace std;

class A{

};

class B1: public A{

};

class B2: public A{

};

class B3: public A{

};

int main(){

    return 0;
}
*/

//Hybrid Inheritence
/*
////////////A////////////
   ||                 ||
   ||                 ||
   \/                 \/      Combining Hierarchical and Multiple
///B///            ///C///                 Inheritence
   ||                 ||
   ||                 ||
   \/                 \/
////////////D/////////////
*/

#include <iostream>
using namespace std;

class A{

};

class B: public A{

};

class C: public A{

};

class D: public B, public C{

};

int main(){

    return 0;
}






