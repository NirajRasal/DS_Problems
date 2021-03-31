/*
FInd the Repeating elementes in array 
Time complexity=O[n*n]
for more informaiton visit:https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/
*/
#include<bits/stdc++.h>
using namespace std;
 
void printRepeating(int arr[], int size)
{
    int i, j;
    printf(" Repeating elements are ");
    for(i = 0; i < size; i++)                   //basic method time complexity=O(n*n)
        for(j = i + 1; j < size; j++)
        if(arr[i] == arr[j])
            cout << arr[i] << " ";
}
 
 void printRepeating1(int arr[], int size)
    {
        int *count = new int[sizeof(int)*(size - 2)];   //imporvised method time complexity=O(n)
    int i;
         
    cout << " Repeating elements are ";
    for(i = 0; i < size; i++)
    {
        if(count[arr[i]] == 1)
            cout << arr[i] << " ";
        else
            count[arr[i]]++;
    }
    }

// Driver Code
int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printRepeating(arr, arr_size);
    cout<<endl;
    printRepeating1(arr,arr_size);
}