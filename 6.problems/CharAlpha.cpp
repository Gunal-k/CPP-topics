#include<bits/stdc++.h>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter a single Character: ";
    cin>>alpha;
    alpha=tolower(alpha);
    if(isalpha(alpha)){
        cout<<alpha<<" is a Alphabhet"<<endl;
    }
    else{
        cout<<alpha<<" is a not a Alphabhet"<<endl;
    }
    return 0;
}