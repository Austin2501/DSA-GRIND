 #include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=1;
    


    while(i<=n){

        int j=1;
        char ch = 'A'+n-i;
        while(j<=i){
            

            cout<<ch++;
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

//find starting point and increment it
