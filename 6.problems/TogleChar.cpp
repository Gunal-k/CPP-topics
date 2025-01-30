#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,c;
    cout<<"Enter a String: ";
    cin>>a;
    for(int i=0;i<a.size();i++){
        int b=toascii(a[i]);
        if(b>96){
            b-=32;
            c+=char(b);
        }
        else{
            b+=32;
            c+=char(b);
        }
    }
    cout<<c<<endl;
    return 0;
}