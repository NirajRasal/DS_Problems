#include<iostream>

using namespace std;


void diagonal_Diff(int size,int arr[100][100])
{
    int sum=0,sum1=0;
    for(int i=0;i<size;i++)        //sum of first diagonal
    {
        for(int j=0;j<size;j++)
        {
            if(i == j)
            sum=sum+arr[i][j];
        }
    
    }

    for(int i=0;i<size;i++)        //sum of second diagonal
    {
        for(int j=0;j<size;j++)
        {   
            if(i+j == (size-1))
            {
                sum1 = sum1 + arr[i][j];
            }
        }
    
    }
    int diff;
    diff = abs(sum - sum1);
    cout<<diff;

    

}

int main()
{
    int n,i,j;
    int arr[100][100];
    cin>>n;
    for(i=0;i<n;i++)        //accept square matrix from user
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
        
    }
     for(i=0;i<n;i++)       //display matrix
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    diagonal_Diff(n,arr);
    return 0;
}