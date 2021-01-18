#include<iostream> 
using namespace std; 
 
int sum(int arr[], int m)  
{  
    int sum = 0; // initialize sum  
   
    for (int i = 0; i < m; i++)  
    sum = sum+arr[i];  
  
    return sum;  
}  
  
// Driver code 
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

    int m = sizeof(arr) / sizeof(arr[0]);  
    cout << "Sum of given array is " << sum(arr, m);  
    return 0;  
}  