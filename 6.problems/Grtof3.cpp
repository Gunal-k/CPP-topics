#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int num1,num2,num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is greater"<<endl;
        }
        else{
            cout<<num3<<" is greater"<<endl;
        }
    }
    else if(num2>num3){
        cout<<num2<<" is greater"<<endl;
    }
    else{
        cout<<num3<<" is greater"<<endl;
    }

    return 0;
}