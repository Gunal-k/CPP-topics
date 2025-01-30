#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(5-i)*2;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=4;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=(5-i)*2;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}