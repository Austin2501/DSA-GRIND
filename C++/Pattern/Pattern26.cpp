 #include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int i=1;
    int count =1;
    


    while(i<=n){

        int space=1;
        
        while(space<=n-i+1){
            

            cout<<space;
            
            space=space+1;
        }

        int j=2;
        
        while (j<=i){
            cout<<"*";
            j=j+1;
        }


        int j2=2;
        
        while (j2<=i){
            cout<<"*";
            j2=j2+1;
        }


        int space2=n-i+1;
        
        while(space2>=1){
            

            cout<<space2;
            
            space2=space2-1;
        }

//////////////////////////////////////////////////////////////////////
    //    //part1
    //     int j=1;
        
    //     while(j<=n-i+1){
            
    //         cout<<j<<" ";
    //         j=j+1;
    //     }

    //     //part2 whole star triangle
    //     j=1;
    //     while(j<=(i-2)*2){
    //         cout<<"* ";
    //         j=j+1;
    //     }       
    //     //part 3

    //     j=n-i+1;
    //     while(j>=1){
    //         cout<<j<<" ";
    //         j=j-1;
    //     }
        
        cout<<endl;
        i=i+1;
    }
}


