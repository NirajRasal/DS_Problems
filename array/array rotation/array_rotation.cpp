// an array K number of times
#include<bits/stdc++.h>
using namespace std;
  
// Function to left rotate an array k times
void leftRotate(int arr[], int n, int k)
{
    cout<<"left rotation:";
    // Print array after k rotations
    for (int i = k; i < k + n; i++)

        cout << arr[i%n] << " ";
}

void rightRotate(int a[],int n,int k)
{
 int b[n],i;

 //Moving each element by k positions
 for(i=0;i<n;i++)
  b[(i+k)%n]=a[i];

 //Display Rotated Array
 cout<<"right rotation:";
 for(i=0;i<n;i++)
  cout<<b[i]<<" ";

}
// Driver program
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"enter distance";
    cin>>k;    
    cout<<"original array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftRotate(arr, n, k);
    cout<<endl;
    rightRotate(arr ,n, k);
    return 0;
}