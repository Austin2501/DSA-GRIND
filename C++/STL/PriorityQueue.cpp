#include <bits/stdc++.h>
using namespace std;
int main(){

    /*PRIORITY QUEUE
    It's not a linear data structure.
    Inside of it tree data structure is maintained.
     PUSH -> log(N)
     POP -> log(N)
     TOP-> O(1)
    */
// generally pq is in max heap 
//    priority_queue<int> pq;

//    pq.push(5);
//    pq.push(2);
//    pq.push(8);
//    pq.emplace(10);

//    cout<<pq.top();

//    pq.pop();

//    cout<<pq.top();

// size, swap, empty functions are same as others

//min heap

priority_queue<int, vector<int>, greater<int>> p;
p.push(5);
p.push(2);
p.push(8);
p.emplace(10);

cout<<p.top();

   p.pop();

   cout<<p.top();
   



}