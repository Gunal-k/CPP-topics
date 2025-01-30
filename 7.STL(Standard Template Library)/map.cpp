#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string> mp;
    mp.insert({"123","gunal"});

    for(auto it:mp){ 
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}