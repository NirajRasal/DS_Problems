#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
// Function to remove duplicate elements
// This function returns new size of modified
// array.
int sorted(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
  
    // To store index of next unique element
    int j = 0;
  
    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
  
    arr[j++] = arr[n-1];
  
    return j;
}

void unsorted(int arr[], int n)
{
    unordered_set<int> s;
 
    // adding elements to LinkedHashSet
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
 
    // Print the elements of LinkedHashSet
    
    for (auto x : s)
        cout << x << " ";

} 

// Driver code
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};            //sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // sorted() returns new size of
    // array.
    
    int arr1[] = { 1, 2, 5, 1, 7, 2, 4, 2 };     //unsorted array
    int m = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    unsorted(arr1, m);
    cout<<endl<<endl;
    n = sorted(arr, n);
  
    // Print updated array
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
  
    return 0;
}
 
// Function to remove duplicate from array

 

 