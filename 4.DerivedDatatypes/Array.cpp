#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,arr[10];
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"Arr["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}