#include<bits/stdc++.h>
using namespace std;

static int i =0;
 class student{

    private:
        int rollno;
        char name[20];

    public:
        void setrollno(){
            rollno = ++i;
        }

        int getrollno(){
            return rollno;
        }

        void setname(char *nme)   /*  nme[] */
        {

            strcpy(name,nme);
        }
        char *getname()
        {
            //*arg here * is value at position not pointer
            return name;
        }


 };

 int main(){
     student s1, s2;
     s1.setrollno(); //roll increments so no setting value 1 by 1
     s2.setrollno(); //instead make a global variable and inc. it

     char temp[20];// char temp[20] = "name1" , temp2[20] = "name2";
      cin >>temp;

     s1.setname(temp);  //s1.setname(temp);
     cin>>temp;         //s2.setname(temp2)
     s2.setname(temp);

     cout<< "The Rollno for  "<<s1.getname()<<"is: "<<s1.getrollno()<<endl;
     cout<< "The Rollno for  "<<s2.getname()<<"is: "<<s2.getrollno()<<endl;

     return 0;
 }
