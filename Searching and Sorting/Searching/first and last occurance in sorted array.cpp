/* Referencd: https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/   */


#include<bits/stdc++.h>

using namespace std; 

void findFirstAndLast(int arr[],int n,int x)
{
    
    int first=0;
    int last;
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= x && arr[i]==x)
        {
            if(first==0)
            {
                first=i;
            }
            else
            {
                last=i;
            }
            
        }
    }
    cout<<"First occurance:"<<first<<endl;
    cout<<"Last occurance:"<<last;
}



int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8, 10, 12 };
    int n = sizeof(arr) / sizeof(int);
    int x = 8;
    findFirstAndLast(arr, n, x);
    return 0;
}