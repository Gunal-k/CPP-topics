#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int name1[5];
    cout<<"Enter the 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>name1[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(name1[j]>name1[j+1]){
                swap(name1[j],name1[j+1]);
            }
        }
    }
    cout<<"Second smallest = "<<name1[1]<<endl;
} 
