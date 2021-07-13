// C++ program to demonstrate default behaviour of
// sort() in STL This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort,
// HeapSort and InsertionSort. 
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    /*string abc ="abcdefg";
    cout<<sizeof(abc);*/
    
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    
    sort(arr, arr + n);
    
  
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";


    sort(arr, arr + n, greater<int>());         //to sort in desending order

    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

  
    return 0;
}