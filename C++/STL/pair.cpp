#include <bits/stdc++.h>
using namespace std;
int main(){
     pair<int,int> p ={1,3};

    cout<<p.first<<" "<<p.second<<endl;

    //now pairing more than 2 values

    pair<int, pair<int,int>> g ={1,{3,4}};

    cout<<p.first<<" "<<g.second.second<<" "<<g.second.first<<endl;

    //pairing values in array

    pair<int,int>arr[]={{1,2},{3,4},{5,6}};

    cout <<arr[1].first;

    cout<<arr[1].second;

    return 0;
}
