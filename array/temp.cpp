#include <bits/stdc++.h>

using namespace std;


void miniMaxSum(int arr[],int size) 
{
    int min_sum=0,max_sum=0,smallest=INT_MAX,largest=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i] > largest)
        {
            largest=arr[i];
        }
        if(arr[i] < smallest)
        {
            smallest=arr[i];
        }
        
    }
    cout<<largest<<" "<<smallest<<endl;
    for(int i=0;i<size;i++)
    {
        min_sum = (min_sum+arr[i]);
        max_sum = (max_sum+arr[i]);
        
    }
    
     cout<<min_sum-largest<<" "<<max_sum-smallest;
    
    
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    miniMaxSum(arr,size);
    return 0;
    
}
