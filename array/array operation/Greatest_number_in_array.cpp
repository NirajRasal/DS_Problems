//Find the Greateest no in array 
//Time complexity=O(n)

#include<iostream>
using namespace std;

void findGreatest(int arr[],int size){
    int temp=0;
    for(int i=0;i<size;i++) 
    {
            if(arr[i]>temp)     //check if array element is greater than temp and replace it if greater
            {
                temp=arr[i];
            }
    }
    cout<<"greatest number is:"<<temp;
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
    findGreatest(arr,n);
    return 0;
}