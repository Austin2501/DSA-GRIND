#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int ans=0,i=0;
    while(n!=0){
        int rem = n%10;
        ans  = rem*pow(10,i) + ans;
        n = n/10;
    i++;
    }
    cout<< ans;
}
