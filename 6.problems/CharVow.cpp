#include<bits/stdc++.h>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter a single Character: ";
    cin>>alpha;
    alpha=tolower(alpha);
    if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
        cout<<alpha<<" is a vowel"<<endl;
    }
    else{
        cout<<alpha<<" is a not a vowel"<<endl;
    }
    return 0;
}