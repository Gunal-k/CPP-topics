#include<bits/stdc++.h>
using namespace std;
int main(){
    string name1,name2;
    cout<<"Enter the String: ";
    cin>>name1;
    for(int i=name1.size()-1;i>=0;i--){
        name2+=name1[i];
    }
    if(name1==name2){
        cout<<"It is a Palindrome"<<endl;
    }
    else{
        cout<<"It is not a Palindrome"<<endl;
    }
    return 0;
}