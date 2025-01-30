#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout<<a<<endl;
}
int main(){
    int num1,num2;
    cout<<"Enter the number 1: ";
    cin>>num1;
    cout<<"Enter the number 2: ";
    cin>>num2;
    gcd(num1,num2);
    return 0;
}