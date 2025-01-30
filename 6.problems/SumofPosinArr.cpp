#include<bits/stdc++.h>
using namespace std;
int main(){
    int name1[5],sum=0;
    cout<<"Enter the 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>name1[i];
    }
    for(int i=0;i<5;i++){
        if(name1[i]>0){
            sum+=name1[i];
        }
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
} 
