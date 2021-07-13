/*
IN-Place sorting
https://www.geeksforgeeks.org/move-zeroes-end-array/
https://www.tutorialspoint.com/data_structures_algorithms/sorting_algorithms.htm

Given an array of random numbers, Push all the zero’s of a given array to the end of the array. 
For example, if the given arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}.
 The order of all other elements should be same. 
Expected time complexity is O(n) and extra space is O(1).
*/

#include<iostream>

using namespace std;
void pushzerotoend(int *arr,int n)
{
    int count= 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[count]=arr[i];
                count++;           
            }

        }
        while(count < n)
        {
            arr[count]=0;
            count++;
        }
       // for (int count = 0; count < n; count++) 
       // cout << arr[count] << " ";        prints the same array 
        
}

int main()
{
    int arr[10];
    cout<<"enter the array of numbers";
    for(int j=0;j<10;j++)
    {
        cin>>arr[j];
    }
    int size=sizeof(arr)/sizeof(arr[0]);

    
    pushzerotoend(arr,size);
     cout << "Array after pushing all zeros to end of array :\n"; 
    for (int i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    return 0;

}