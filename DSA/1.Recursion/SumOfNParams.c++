#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i<1){
        cout<<n<<endl;
        return;
    }
    f(i-1,n+i);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    f(n,0);
}