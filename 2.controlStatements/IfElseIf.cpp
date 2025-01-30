#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int marks;
    cout<<"please enter your marks: ";
    cin>>marks;
    if(marks>95){
        cout<<"Distinction"<<endl;
    }
    else if(marks>=90){
        cout<<"First Class"<<endl;
    }
    else if(marks>=80){
        cout<<"Second Class"<<endl;
    }
    else if(marks>=70){
        cout<<"Third Class"<<endl;
    }
    else if(marks>=60){
        cout<<"Fourth Class"<<endl;
    }
    else if(marks>=50){
        cout<<"Fail"<<endl;
    }
    return 0;
};