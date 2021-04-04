/*Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

Best Case Time Complexity: O(n). Best case occurs when array is already sorted.*/


#include<iostream>
using namespace std;
    
 void bubble(int arr[], int n)         //optimized solution
{
   int i,j,temp,a=0,b=0;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
       a++;                     //increment iterations
     swapped = false;
     for (j = 0; j < n-i-1; j++)    //size-i because 1 element gets fixed in position after every iteration
     {
        b++;                    //increment comparision
        if (arr[j] > arr[j+1])
        {
          
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           swapped = true;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   
   }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"no of iterations:"<<a<<endl;
    cout<<"no of comparisons"<<b;
}

int main()
{
    int arr[]={14,33,27,35,10};
    int size=sizeof(arr) / sizeof(arr[0]);
    bubble(arr,size);
    return 0;
}