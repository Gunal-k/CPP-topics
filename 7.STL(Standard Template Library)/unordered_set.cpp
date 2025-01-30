#include<bits/stdc++.h>
using namespace std;

int main()
{
    //set<int,greater<int>> st; for desc order
    unordered_set<int> st;
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.erase(5);
    
    for(auto it:st){
        cout<<it<<" ";
    }

    auto a = st.find(9);
    if(a==st.end()){
        cout<<"\nelement not present"<<endl;
    }
    else{
        cout<<*(a)<<endl;
    }

    
    return 0;
}