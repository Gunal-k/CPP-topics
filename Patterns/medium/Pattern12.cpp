#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=2;j<(5-i)*2;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    
    return 0;
}