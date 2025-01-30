#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    int numd=num;
    while(numd>0){//1
        int val=numd%10;//val=1
        sum+=val*val*val;//sum=153
        numd/=10;//153/10 == 0
    }
    if(num==sum){//153==153
        cout<<num<<" is a Armstrong number"<<endl;
    }
    else
        cout<<num<<" is not a Armstrong number"<<endl;
    return 0;
}