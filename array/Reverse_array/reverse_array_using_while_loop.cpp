/* another method to reverse array using iterative way */
//Time complexity=O(n)

#include<iostream>

using namespace std;
void reversearray(int arr[],int start,int end)
{
    while(start < end)
    {
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};

    int n=sizeof(arr)/sizeof(arr[0]);

    reversearray(arr ,0,n-1);

    for(int i=0;i<n;i++)           //print array reverse using for loop
    {
        cout<<arr[i]<<" ";
        
    }

}