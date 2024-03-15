#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=0;
    int count = 1;
    while(i<n){

        int j=0;
        while(j<n){
            
            cout<<count;
            count = count+1; //count++
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}