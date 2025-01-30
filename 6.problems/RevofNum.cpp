#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        int a=num%10;
        sum=sum*10+a;
        num/=10;
    }
    cout<<sum<<endl;
    return 0;
}