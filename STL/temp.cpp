#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + size);
    
    int median=0;
    median = size/2;
    cout<<arr[median];
    return 0;
}