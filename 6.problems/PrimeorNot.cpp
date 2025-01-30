#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,j;
    cout<<"Enter the number : ";
    cin>>x>>y;
    for(j=x;j<=y;j++)
    {
        int count=1;
    int a=round(j/2);
    for(int i=1;i<=a;i++){
        if(count>2){
            break;
        }
        if(j%i==0){
            count++;
        }
    }
    if(count==2) cout<<"it is a prime number"<<j<<endl;
    else cout<<"its is not a prime number";
    }
    
    return 0;
}