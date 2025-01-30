#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,sum=0;
    cout<<"Enter the 2 numbers : ";
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        sum+=i;
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}