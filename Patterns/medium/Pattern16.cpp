#include<bits/stdc++.h>
using namespace std;

int main(){
    char n='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<char('A'+(i-1));
        }
        cout<<"\n";
    }
    return 0;
}