#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int num;
    cout<<"Enter the number of elements : ";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}