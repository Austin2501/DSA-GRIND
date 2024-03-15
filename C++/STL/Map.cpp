#include <bits/stdc++.h>
using namespace std;
int main(){
    /*MAP ==> map stores unique keys in sorted order
    T.C. =>O(LOGN)
    */
    /*{Key, Value}*/

    map<int, int> mpp;
   
    mpp[1] =2; //at key 1 stores value 2

    //**//mpp.emplace({3,1});
    mpp.insert({3,1});

     // map<int, pair<int, int>> mapp;
    //map<pair<int, int>, int> mp;

    //mp[{2,3}] =10;

    // for(auto it : mpp){
    //     cout<< it.first <<" "<< it.second <<endl;
    // }

    cout<< mpp[1];
    cout<<mpp[5]; // returns NULL( or zero)

    auto i =mpp.find(2);
    cout<< *(i).second; 

    auto it = mpp.find(5); // points towards mpp.end()

    // auto it = mpp.lower_bound(1);

    //**// auto it = mpp.Upper_bound(2);

    //erase, swap, size, empty are same as for others

    //MultiMap
    // everything same as above but it can store multi keys(duplicate keys)
    //only mpp[key] can't be used here

    /*Unordered map
    stores unique keys but unsorted
    T.C. => O(1)
    WORST CASE =>O(N) RARE CASE
    */

}