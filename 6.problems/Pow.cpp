#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,sum=1;
    cout<<"Enter the 2 numbers : ";
    cin>>num1>>num2;
    for(int i=1;i<=num2;i++){
        sum*=num1;
    }
    cout<<sum<<endl;
    return 0;
}