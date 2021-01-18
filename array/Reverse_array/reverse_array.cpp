/* reverse the given array with lowest possible time complexity */
/*Time complexity=O(n)*/
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;    
    int arr[n];
    int i;
     cout<<"enter the array of numbers"<<endl;
    for(i=1;i<=n;i++)           //accept array from user
    {
        cin>>arr[i];
    }
    cout<<"the reverse of array is:"<<endl;
    for(i=n;i>=1;i--)           //print array reverse using for loop
    {
        cout<<arr[i]<<" ";
    
    }

    return 0;

}


/* 
Another logic to reverse array
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}     
    start= 0 end end = n-1;
*/