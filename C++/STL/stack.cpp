#include <bits/stdc++.h>
using namespace std;
int main(){

     /*STACK
     FOLLOW LIFO
    ONLY 3 OPERATIONS CAN BE DONE(T.C. OF ALL OPERATIONS = O(1))
    1->PUSH
    2->POP
    3->TOP */  

     stack<int> st;
     st.push(1);
     st.push(2);
     st.push(4);
     st.push(5);
     st.emplace(8);

     cout<<st.top();

     st.pop();

     cout<<st.top();

     cout << st.size();

     cout<<st.empty();

     //swaping two stacks
      
    //   stack<int> s1, s2;
    //   s1.swap(s2);



}