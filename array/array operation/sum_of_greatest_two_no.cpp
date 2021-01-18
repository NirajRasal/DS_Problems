//Addition,subtraction,multiplication and division of two largest no from array 
//Time complexity=O(n)

#include<iostream>
using namespace std;

void sum(int arr[],int size)
{
    int first,second;
    if(arr[0]>arr[1])       //find largest and second largest no from first two element in array
    {
        first=arr[0];
        second=arr[1];
    }
    else
    {
        first=arr[1];
        second=arr[0];
    }
    for(int i=0; i<size; i++)   //traverse array to find bigger no than previous numbers
    {
        if(arr[i] > first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i] > second && arr[i]!=first)
        {
            second=arr[i];
        }
    }
    cout<<"sum of largest two no is:"<<first+second<<endl;
    cout<<"subtraction of largest two no is:"<<first-second<<endl;
    cout<<"multiplication of largest two no is:"<<first*second<<endl;
    cout<<"division of largest two no is:"<<first/second<<endl;
}

int main()
{
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
    sum(arr,n);
    return 0;
}