 #include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=1;
    int count =1;
    


    while(i<=n){

        int space=1;
        
        while(space<=n-i){
            

            cout<<" ";
            
            space=space+1;
        }

        int j=1;
        
        while (j<=i){
            cout<<count++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

