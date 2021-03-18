#include<iostream>
using namespace std;


int binearysearch(int arr[],int start,int end,int find)
{
    int mid;        
    while(start <= end)
    {
        mid=(start+end)/2;
        
        
        if(arr[mid] < find)
        {
            start=mid+1;
            binearysearch(arr,start,end,find);
        }
        else if(arr[mid] > find)
        {
            end=mid-1;
            binearysearch(arr,start,end,find);
        }  
        else
        {
            return mid;
        }
    }
   
    return -1;
}

int main()
{
    int end;
    int i;
    int start=0;  
    int no;
    cout<<"enter the size of array:";
    cin>>end;
    int arr[end];
    cout<<"enter the array:";
    for(i=0;i<end;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the no to find:";
    cin>>no;
    int r = binearysearch(arr,start,end-1,no);
    if(r == -1)
    {
        cout<<"no. not found";
    }
    else
    {
        cout<<"no.found at postion:"<<r;
    }
    
}