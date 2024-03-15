#include <bits/stdc++.h>
using namespace std;
int main(){

        list<int> ls;
        ls.push_back(2);
        ls.emplace_back(4);

        ls.push_front(5);

        ls.emplace_front(); 

    
         for(auto i :ls ){
             cout<< i<<" ";
         }

         //rest functions are same as vectors
         //begin, end, rbegi,rend, clear, insert, size, swap



}
