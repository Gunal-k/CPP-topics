#include<bits/stdc++.h>
using namespace std;

int main(){
    char n='A';
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<char('A'+(j-1));
        }
        cout<<"\n";
    }
    return 0;
}