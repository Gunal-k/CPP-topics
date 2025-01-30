#include<bits/stdc++.h>
using namespace std;
int main(){
    string name1,name2;
    cout<<"Enter the String: ";
    cin>>name1;
    for(int i=name1.size()-1;i>=0;i--){
        name2+=name1[i];
    }
    cout<<name2<<endl;
    return 0;
} 
