#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        sum+=num%10;
        num=(num-(num%10))/10;
    }
    cout<<sum<<endl;
    return 0;
}