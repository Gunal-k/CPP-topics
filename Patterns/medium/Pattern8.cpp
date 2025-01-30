#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=5;i>0;i--){
        for(int j=i;j<5;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}