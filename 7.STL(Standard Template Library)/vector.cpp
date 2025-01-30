#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &arr)
{
    //for-each loop
    for(auto it : arr){
        cout<< it<<" ";
    }
    cout<<"\n";
}
int main()
{
    //create vector empty
    vector<int> vec;
    
    //create vector of 5 arrays default=0
    vector<int> vec1(5);

    //create vector of 5 arrays with default values =3
    vector<int> vec2(5,3);

    //create vector with initialization
    vector<int> vec3{1,2,3,4,5};

    //using containers in vector
    vector<pair<int,int>> vecpair(5);

    //create pair in vector with initialization
    vector<pair<int,int>> vecpair2{{2,3}};

    //vector inside vector
    vector<vector<int>> vec5(5,vector<int>(5));

    //resize
    vec.resize(4);

    //initializing
    vec[0]=1;

    //accessing
    cout<<vec2[1]<<endl;

    //accessing containers
    vecpair[0].first=10;

    //size
    vec3.size();

    //accessing front and back
    cout<<vec3.front()<<endl;
    cout<<vec3.back()<<endl;

    //printing(iterating through vector)
    for(vector<int>::iterator it=vec2.begin();it!=vec2.end();it++){
        cout<<*(it)<<endl;
    }

    printvec(vec3);

    int size;
    cin>>size;
    vector<int> vec7;
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        vec7.push_back(num);
    }

    printvec(vec7);

    return 0;
}