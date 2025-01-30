#include<bits/stdc++.h>
using namespace std;
int main(){
    int name1[5],name2[5];
    cout<<"Enter the String: ";
    for(int i=0;i<5;i++){
        cin>>name1[i];
    }
    int j=0;
    for(int i=4;i>=0;i--){
        name2[j]=name1[i];
        j++;
    }
    for(int i=0;i<5;i++){
        cout<<name2[i]<<endl;
    }
    return 0;
} 
