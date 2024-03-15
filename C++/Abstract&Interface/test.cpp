#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;

    getline(cin, str);
    int n= str.length();

    for(int i=2; i<n; i=i+3){
        str[i] = 'x' ;
    }

    cout<<str;

}