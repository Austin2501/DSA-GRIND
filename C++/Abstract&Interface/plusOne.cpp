#include<iostream>
#include<vector>
using namespace std;


vector<int> plusOne(vector<int>& digits) {
    int num =0;
    for(int i=0;i<digits.size(); i++){
        num = (num*10) + digits[i];
    }
    num = num+1;
    cout<<num<<endl;
    while(num>0){
        int i=0;
        int rem = num%10;
        digits[i] = rem;
        num = num/10;
        i++;
    }

    return digits;
}


int main(){
    int n=3;
    vector<int> digits;
    for(int i=0; i<n; i++){
        cin>>digits[i];
    }

    plusOne(digits);

    for(int i=0; i<n; i++){
        cout<<digits[i]<<" ";
    }
    return 0;
}