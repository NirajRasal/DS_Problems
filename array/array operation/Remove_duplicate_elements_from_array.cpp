/*
FInd the Repeating elementes in array 
Time complexity=O[n*n]
for more informaiton visit:https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/
*/
#include <limits>
#include <iostream>
using namespace std;

void Remove(int arr[], int size)
{
    int i=0, temp,j,arra[100],k=0;
    for(int i=0; i<size; i++)       //compare every element with other elements
    {
        for (int j = 0; j < k; j++)
        {
            if ( arr[i] == arra[j] )
            {
                break;
            }
        }
        if( j == k )
        {
            arra[k] == arr[i];
            k++;
        }
    }
        cout << "Repeated elements deleted: ";
        for (i = 0; i < k; i++)
        {
            cout << arra[i] << " ";
        }
}
int main()
{
    int n;
    cout << "enter size of array";
    cin >> n;
    int arr[n];
    int i;
    cout << "enter the array of numbers" << endl;
    for (i = 0; i < n; i++) //accept array from user
    {
        cin >> arr[i];
    }
    Remove(arr, n);
    return 0;
}