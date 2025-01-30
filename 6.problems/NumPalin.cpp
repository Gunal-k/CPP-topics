#include<bits/stdc++.h>
using namespace std;
int main(){
    string name1,name2;
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    name1=to_string(num);
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