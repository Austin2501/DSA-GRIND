#include <bits/stdc++.h>
using namespace std;
int main(){

    int n =6;
    int cnt = __builtin_popcount(n);
    /* count the number of bit positions in binary
     representation of an integer which is set to 1*/

    cout<< cnt<<endl;

    long long num = 16574578468;
    int cnt1 = __builtin_popcountll(num);

    cout<< cnt1;

    string s ="123";

    do{
        cout <<endl<<s<<endl;

    }while(next_permutation(s.begin(), s.end()));

    /*if we got 231 then it starts from there
    we can't get previous permutations so
    we have to sorted it first then do permutation*/

    /*
    string s ="123";
    sort(s.begin(), s.end());
    do{
        cout <<endl<<s<<endl;

    }while(next_permutation(s.begin(), s.end()));
    */

   //int maxi = *max_element(a, a+n); //max_element gives address but * give value at that address
    //int mini = *min_element(a.begin(),a.end());


}