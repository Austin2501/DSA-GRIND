#include<bits/stdc++.h>
using namespace std;
int main(void){

  /*  int a = -6;

    bitset<16> x(a);

    cout<<"Binary of "<< a;
    cout<<x<<endl;

    bitset<16> y(6);

    cout<<"binary of y" <<y;

  */
    long long int n;
    cin>> n;
    unsigned long long int i=0, ans =0;
    if(n<0){

        n=pow(2,16)+n;
    }
    cout<< n << endl;

    while(n){

        int lastBit =n&1;
        ans = (pow(10,i) * lastBit) + ans;
        n = n>>1;
        i++;
        cout<< ans <<endl;
    }

    cout<< ans<< endl;
    return 0;
}
