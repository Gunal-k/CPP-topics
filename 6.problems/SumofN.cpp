#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,sum=0;
    cout<<"Enter the number : ";
    cin>>num1;
    for(int i=1;i<=num1;i++){
        sum+=i;
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}