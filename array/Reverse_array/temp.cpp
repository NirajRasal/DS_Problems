#include<iostream>

using namespace std;

void justanothermethod(int arr[],int n)
{
    int b=10;
   // arr[b]={6,7,8,9,10};
    cout<<"second array"<<endl;
    for(int i=0;i<b;i++)           
    {
        cout<<arr[i]<<" ";
        
    }    
}
int main()
{
    int a=10;
    
    int arr[a]={1,2,3,4,5};
    justanothermethod(arr,a);
    cout<<"First array";
      for(int i=0;i<a;i++)           
    {
        cout<<arr[i]<<" ";
        
    }
    
}
