#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
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
    selection_sort(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}