#include <bits/stdc++.h>
using namespace std;

vector<int> counting_sort(vector<int> &arr)
{
    int n = *(max_element(arr.begin(), arr.end())) + 2;
    int arr1[n] = {};
    vector<int> sorted(arr.size(), 0);
    for (auto it : arr)
    {
        arr1[it]++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        arr1[i] += arr1[i - 1];
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        sorted[arr1[arr[i]] - 1] = arr[i];
        arr1[arr[i]]--;
    }
    return sorted;
}
int main()
{
    int num;
    cout << "Enter the number of elements : ";
    cin >> num;
    vector<int> arr(num);
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    vector<int> sorted = counting_sort(arr);
    for (auto it : sorted)
    {
        cout << it << " ";
    }
    return 0;
}