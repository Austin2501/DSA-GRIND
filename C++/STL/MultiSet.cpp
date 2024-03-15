#include <bits/stdc++.h>
using namespace std;
int main(){
    
    ///////SORTED BUT NOE UNIQUE(STORES MULTIPLE VALUES)////////////
    
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    // ms.erase(1); //all 1's erased

    int cnt = ms.count(1); //count all 1's

    // only a single one erased
    // ms.erase(ms.find(1)); 

    // erase multiple values 
    //**//ms.erase(ms.find(1), ms.find(1) + 2);


}