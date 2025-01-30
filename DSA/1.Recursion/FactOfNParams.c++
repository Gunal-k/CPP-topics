#include<bits/stdc++.h>
using namespace std;
void f(int n,int i){
    if(n<1){
        cout<<i<<endl;
        return;
    }
    f(n-1,n*i);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    f(n,1);
}