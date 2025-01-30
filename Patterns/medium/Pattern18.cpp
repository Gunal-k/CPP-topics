#include<bits/stdc++.h>
using namespace std;

int main(){
    char n='A';
    for(int i=5;i>=1;i--){
        for(int j=i;j<=5;j++){
            cout<<char('A'+(j-1))<<" ";
        }
        cout<<"\n";
    }
    return 0;
}