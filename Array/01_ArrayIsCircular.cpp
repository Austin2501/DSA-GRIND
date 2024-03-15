
#include<bits/stdc++.h>
using namespace std;

bool isCircular(vector<int> &arr, int n){

    int count =0;

    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }

    if(count==1){
        cout<<"Arr is circular.";
    }
    else{
        cout<<"Arr is not circular";
    }
    return -1;
}

int main(){

    int n;
    cout<<"Enter no. of entries:";
    cin>>n;

    vector<int>arr(n);
    cout<<endl;
    cout<<"Enter entries:";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    isCircular(arr, n);

}












/*
Ascending circularly sorted array:

poster
Consider an array sorted in ascending order: arr[] = {12, 17, 19, 23, 34, 45} 
If the above array is rotated by 3 steps to the left, then the resultant array will be ascending circularly sorted array: {23, 34, 45, 12, 17, 19}

Descending circularly sorted array:

Consider an array sorted in descending order: arr[] = {35, 26, 11, 9, 5, 3} 
If the above array is rotated by 3 steps to the left, then the resultant array will be descending circularly sorted array: {9, 5, 3, 35, 26, 11}
*/