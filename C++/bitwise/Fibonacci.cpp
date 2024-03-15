#include<iostream>
using namespace std;
int main(){

    int n;
    cin >>n;

    int first =0;
    int sec =1;

    cout<<first<<endl<<sec<<endl;

    for(int i=1; i<=n;i++){

        int next = first+sec;

        cout<<next<<endl;
        first =sec;
        sec = next;

    }
        

        

return 0;
}