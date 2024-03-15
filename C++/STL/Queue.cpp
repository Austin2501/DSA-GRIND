#include <bits/stdc++.h>
using namespace std;
int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() +=5; //adds 5 to last value 4. so last value now is 9

    cout<<q.back();

    cout<<q.front();

    q.pop(); //pop deletes front value(FIFO)

    cout<<q.front();

    //other operations are same as stack 
    //T.C. FOR all operations is 0(1).


}