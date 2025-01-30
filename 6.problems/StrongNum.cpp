#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    int numd=num;
    string a=to_string(num);
    int b=a.size();
     while(num!=0){
        int c=num%10,prod=1;
        for(int i=c;i>=1;i--){
            prod*=i;
        }
        sum+=prod;
        num=(num-(num%10))/10;
    }
    if(numd==sum){
        cout<<numd<<" is a Strong number"<<endl;
    }
    else{
        cout<<numd<<" is not a Strong number"<<endl;
    }
    return 0;
}