#include<limits>
#include<iostream>
using namespace std;

void WaveArray(int arr[],int size,int start)
{
    int Greatest=0;
    int Smallest=INT8_MAX;
    
}
int main()
{
    int start=0;
    int n;
    cout<<"enter size of array";
    cin>>n;    
    int arr[n];
    int i;
     cout<<"enter the array of numbers"<<endl;
    for(i=0;i<n;i++)           //accept array from user
    {
        cin>>arr[i];
    }
    WaveArray(arr,n,start);
    return 0;
}