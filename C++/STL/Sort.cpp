#include <bits/stdc++.h>
using namespace std;
int main(){

      bool comp(pair<int, int> p1, pair<int, int> p2) {
        if(p1.second < p2.second){
            return true;
        }
        else if(p1.second == p2.second){
            if(p1.first > p2.second) 
            return true;
        }
        return false;
      }

    int a[] ={4,2,6,8,2,6,9};
    int n=7;

    // sort(a, a+n);
   

    //sort(v.begin(), v.end()); //same for all containers

    // sorting for a portion of array
    // sort(a+2, a+4);

    //sorting in decending order

    // sort(a, a+n, greater<int>()); //greater<int< is a comparator
    //  int i=0;
    // for (i=0; i<n;i++){
    //     cout<<a[i]<<endl;
        
    // } 

    //sort in a particular way
    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
     sort(a, a+n, comp);

    
    

}