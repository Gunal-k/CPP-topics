#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stk;
    int check=stk.empty();
    cout<<check<<endl;
    stk.push(5);
    stk.push(6);
    stk.push(7);
    //cout<<stk.top()<<endl;
    //stk.pop();
//    cout<<stk.top()<<endl;
    
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    
    return 0;
}