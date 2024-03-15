#include <bits/stdc++.h>
using namespace std;
int main(){

    // int n;
    // cin>>n;

    // int i=0;
    // while(i<n){

    //     int j=0;
    //     while(j<n){
    //         cout<<n-j;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<n-j+1; //printing reverse value of j
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}