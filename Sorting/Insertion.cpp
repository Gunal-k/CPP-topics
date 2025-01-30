#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the number of elements : ";
    cin>>num;
    vector<int> arr(num);
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,num);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}