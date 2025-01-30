#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creating pair
    pair<int,int>num;
    //nested pair
    pair<pair<int,int>,int>num1;

    //creating pair with initialization
    pair<int,int>nump(10,20);

    ////creating nested pair with initialization
    pair<pair<int,int>,int>num2{{2,3},5};

    //initializing
    num=make_pair(5,6);
    num1.second=15;


    //nested initializing
    num1.first.first=15;
    num1.first.second=20;

    //accessing
    cout<<"num.first : "<<num.first<<endl;
    cout<<"num1.first.first : "<<num1.first.first<<endl;
    cout<<"num2.first.second : "<<num2.first.second<<endl;

    return 0;

} 