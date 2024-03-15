#include <bits/stdc++.h>
using namespace std;
int main(){

      deque<int>dq;
      dq.push_back(1);
      dq.emplace_back(2);
      dq.push_front(4);
      dq.emplace_front(5);

      dq.pop_back(); //pop from last
      dq.pop_front(); //pop from front

      cout<<dq.back(); //show last value
       cout<<dq.front(); //shows first value

       //rest functions are same as vector
       //begin, end, rend, rbegin, clear, insert, size, swap





}