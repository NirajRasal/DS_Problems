// Binary Search in
// Standard Template Library (STL)
#include <algorithm>
#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
   
    //sort array first using sort function
    sort(a, a + asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))        //3RD parameter is element want to be searched
    {
        cout << "\nElement found in the array";     //if binary_search returns true
    }
    else
    {
        cout << "\nElement not found in the array";
    }
    
    return 0;
}