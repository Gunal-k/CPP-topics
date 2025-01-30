#include<bits/stdc++.h>
using namespace std;
bool f(int i,string arr){
    if(i>=arr.size()/2) return true;
    if(arr[i]!=arr[arr.size()-i-1]) return false;
    f(i+1,arr);
}
int main(){
    string n;
    cout<<"Enter the String : ";
    cin>>n;
    if(f(0,n)){
        cout<<"Is a Palindrome"<<endl;
    }
    else
        cout<<"Is Not a Palindrome";
    return 0;
}