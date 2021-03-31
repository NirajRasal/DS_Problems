#include<iostream>
using namespace std;

int rotate(int arr[],int distance,int size)
{
    int n=0;
    int temp[n];
    int temp1[n];
    
    for(int i=distance;i<=size;i++)
    {
        temp1[n]=i;
        n++;
    }

    for(int i=0;i<distance;i++)
    {
        temp[n]=i;
        n++;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<temp1[i]<<" ";
    }
    return 0;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int d;
    cout<<"enter the distance";
    cin>>d;
    int size=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,d,size);
    return 0;
}