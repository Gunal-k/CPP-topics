#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cout<<"Enter the number: ";
    cin>>num1;
    int i=1;
    while(i<=10){
        cout<<num1<<"X"<<i<<"="<<num1*i<<endl;
        i+=1;
    }
    return 0;
}