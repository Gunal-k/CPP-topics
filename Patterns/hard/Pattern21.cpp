#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<8;i++){
        if(i==1||i==7){
            for(int j=1;j<5;j++){
                cout<<"*";
            }
        }
        else
        {
            if(i%2==0&&i!=7){
                cout<<endl;
            }
            else{
                for(int j=1;j<5;j++){
                    if(j==1||j==4){
                        cout<<"*";
                    }
                    else
                        cout<<" ";
                }
            }
        }
    }
    return 0;
}