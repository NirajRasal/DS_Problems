// C++ program to remove a given element from an array
#include <iostream>
using namespace std;

int deleteElement(int arr[], int n, int x)
{
    // Search x in array
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
                for (int j = i; j < n - 1; j++)     //reduce size of array 
                {
                    arr[j] = arr[j + 1];            //move all elements on space ahead
                }
            
        } 
    }
    return n-1;
}

/* Driver program to test above function */
int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;

    // Delete x from arr[]
    n = deleteElement(arr, n, x);

    cout << "Modified array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
