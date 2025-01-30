#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cout<<"Enter the number : ";
    cin>>num1;
    vector<int> ls;
    for(int i=1;i*i<=num1;i++){
        if(num1%i==0){
            ls.push_back(i);
            if(num1/i!=1){
                ls.push_back(num1/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout<<it<<' ';
    return 0;
}