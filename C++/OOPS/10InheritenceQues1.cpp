/*  Write a C++ program to demonstrate the inheritance in object oriented
programming (oops)  by taking the value of private variable 10,
protected variable 20 and public variable 30 , code should print the
values of all variables.*/

#include<iostream>
using namespace std;

class Base {
  private:
    int pvt_var = 10;

  protected:
    int prot_var = 20;

  public:
    int pub_var = 30;
    int private_get() {
      return pvt_var;
    }
};

class PublicDerived : public Base {
  public:
    int prot_get() {
      return prot_var;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private value = " << object1.private_get() << endl;
  cout << "Protected value = " << object1.prot_get() << endl;
  cout << "Public value = " << object1.pub_var << endl;
  return 0;
}
