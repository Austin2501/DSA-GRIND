 #include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=1;
    


    while(i<=n){
        //1st triangel(spaces)      
        int space=n-i;
        
        while(space){
            

            cout<<" ";
            
            space=space-1;
        }
        //2st triangle
        int j=1;
        while (j<=i){
            cout<<j;
            j=j+1;
        }
        //3rd triange;
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
         

        cout<<endl;
        i=i+1;
    }
}


