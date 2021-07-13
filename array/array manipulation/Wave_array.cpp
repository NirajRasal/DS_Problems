/*The idea is based on the fact that if we make sure that all even positioned (at index 0, 2, 4, ..)
 elements are greater than their adjacent odd elements, we don’t need to worry about odd positioned element.
  Following are simple steps. 
    1) Traverse all even positioned elements of input array, and do following. 
    a) If current element is smaller than previous odd element, swap previous and current. 
    b) If current element is smaller than next odd element, swap next and current.*/

//Time complexity: O(n)
//https://www.geeksforgeeks.org/sort-array-wave-form-2/

#include<limits>
#include<iostream>
using namespace std;

// A utility method to swap two numbers.
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
// This function sorts arr[0..n-1] in wave form, i.e., arr[0] >=
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ....
void sortInWave(int arr[], int n)
{
    // Traverse all even elements
    for (int i = 0; i < n; i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && arr[i] < arr[i-1] )
            swap(&arr[i], &arr[i-1]);
 
        // If current even element is smaller than next
        if (i<n-1 && arr[i] < arr[i+1] )
            swap(&arr[i], &arr[i + 1]);
    }
}
int main()
{
    int start=0;
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
    sortInWave(arr,n);
    cout<<"Wave form is:"<<endl;
    for(i=0;i<n;i++)           //print array
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}