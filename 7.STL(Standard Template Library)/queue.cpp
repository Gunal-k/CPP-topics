#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    bool check=q.empty();
    cout<<check<<endl;
    q.push(5);
    q.push(6);
    q.push(7);
    //cout<<stk.top()<<endl;
    //stk.pop();
    //cout<<stk.top()<<endl;
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    unordered_set<int> un;
    return 0;
}