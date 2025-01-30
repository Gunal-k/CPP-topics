#include<bits/stdc++.h>
using namespace std;
int main(){
    int name1[5],key;
    cout<<"Enter the 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>name1[i];
    }
    cout<<"Enter the key element: ";
    cin>>key;
    for(int i=0;i<sizeof(name1);i++){
        if(name1[i]==key){
            cout<<key<<" found at index "<<i<<endl;
            break;
        }
        else{
            if(i==sizeof(name1)){
                cout<<key<<" is not found"<<endl;
            }
            continue;
        }
    }
} 
