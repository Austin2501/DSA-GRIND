#include<bits/stdc++.h>
using namespace std;

bool isEqual(vector<int> &arr, vector<int> &arr2, int n, int m){
    if(n != m){
        return false;
    }

    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(int i=0; i<n;i++){
        if(mp.find(arr2[i]) == mp.end()){ // If there is an element in arr2[], but not in arr1[]
            return false;
        }
        if(mp[arr2[i]] == 0){    // If an element of arr2[] appears more times than it appears in arr1[]
            return false;
        }
        mp[arr2[i]]--;    // decrease the count of arr2 elements in the unordered map
    }
    return true;

}

int main(){

    int n;
    cout<<"Enter no. of entries:";
    cin>>n;

    vector<int>arr(n);
    cout<<endl;
    cout<<"Enter 1st entries:";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

        
    int m;
    cout<<"Enter no. of entries:";
    cin>>m;
    vector<int>arr2(m);
    cout<<endl;
    cout<<"Enter 2nd entries:";
    
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    cout<<endl;

    bool res = isEqual(arr, arr2, n, m);

    if(res){
        cout<<"Both are equal.";
    }
    else{
        cout<<"not equal.";
    }

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



/*
Check if two arrays are equal or not
Given two arrays, arr1 and arr2 of equal length N, the task is to find if the given arrays are equal or not. 

Two arrays are said to be equal if:

both of them contain the same set of elements, 
arrangements (or permutations) of elements might/might not be same.
If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

1 method

 sort and compare each element.     TC - 0(nlogn) SC- 0(1)

 2 method

 use hashmap and comapare if element count is equal or not.  TC - 0(N) SC- 0(N)
*/
