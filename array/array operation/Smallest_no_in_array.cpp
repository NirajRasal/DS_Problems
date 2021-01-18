//Find the Smallest no in array 
//Time complexity=O(n)
#include<limits>
#include<iostream>
using namespace std;

void findGreatest(int arr[],int size){
    int temp=INT8_MAX;
    for(int i=0;i<size;i++) 
    {
            if(arr[i] < temp)     //check if array element is smaller than temp and replace it if smaller
            {
                temp=arr[i];
            }
    }
    cout<<"Smallest number is:"<<temp;
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