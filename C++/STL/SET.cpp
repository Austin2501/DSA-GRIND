#include <bits/stdc++.h>
using namespace std;
int main(){

    //set always sorted and unique values

    set<int> st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3); //{1,2,3,4,}
     
    //functionality of insert in vector 
    //can be used also, that only increases 
    //efficiency

    //begin(), end(), rbegin(), rend(), size(), 
    //empty() and swap() are same as those of above
     
    auto i = st.find(3); //it returns the iterator which points to 3
    //auto i = st.find(6); //it returns an iterator which points the value 
                        //right after the last value if no. not in list
                        //which is st.end()

    for (auto it = i; it != st.end(); it++)
    cout << *it << " ";

    //st.erase(2); //erases 5 from set-> takes logarithmic time

          int cnt = st.count(1); //only count 1 becoz every value is unique

        // auto i = st.find(3);
        // st.erase(i); 
        // //deletes iterator-> T.C. = O(1)

        // auto it1 = st.find(2);
        // auto it2 = st.find(4);
        // st.erase(it1,it2); //erases the value between 2 to 4 but not 4

        //lower bound and upper bound functions works same as with vectors

        auto it = st.lower_bound(2);
        auto it = st.upper_bound(3);


        ///////ALL OPERATIONS TAKES LOGARITHMIC TIME////////

        ////Unordered Set/////

        // unordered set<int> st;
        // lower bound and upper bound functions
        //does nor works, rest all functions are same
        //as above, it does not stores in any particular
        // order, it has a better complexity
        //than set in most cases, except some when collision happens(WORST CASE = O(N))
        // most of the cases T.C. => O(1)
         

}