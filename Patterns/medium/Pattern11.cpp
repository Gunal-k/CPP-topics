#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=true;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
            n=!n;
        }

        cout<<"\n";
    }
    
    return 0;
}