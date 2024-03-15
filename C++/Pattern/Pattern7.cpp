#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=1;
    
    while(i<=n){

        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

//no of column printed should be equal to which no. of row it is
 