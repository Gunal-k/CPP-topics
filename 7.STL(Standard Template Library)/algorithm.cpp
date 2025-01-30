#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &arr)
{
    //for-each loop
    for(auto it : arr){
        cout<< it<<" ";
    }
    cout<<"\n";
}
int main()
{
    vector<int> vec{1,9,2,8,3,7,4,6,5};

    sort(vec.begin(),vec.end(),greater<int>());

    printvec(vec);

    reverse(vec.begin(),vec.end());
    printvec(vec);
    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    
    cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    cout<<*(min_element(vec.begin(),vec.end()))<<endl;
    return 0;
}
