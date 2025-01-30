#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int c=0;
    cout<<"Enter a String: ";
    cin>>a;
    for(char ch : a){
        if(isupper(ch)){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}