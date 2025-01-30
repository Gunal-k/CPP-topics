#include<bits/stdc++.h>
using namespace std;
int main(){
    int name1[5];
    cout<<"Enter the 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>name1[i];
    }
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(name1[j]>name1[j+1]){
                int temp = name1[j];
                name1[j]=name1[j+1];
                name1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<name1[i]<<endl;
    }
} 
