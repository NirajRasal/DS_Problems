#include<iostream>

using namespace std;

int largest_sum_subarray(int arr[],int size)
{
    int global_max=0;
    int local_max=0;
    int start=0,end=0,s=0;
    for(int i=0;i<size;i++ )
    {
        local_max = local_max + arr[i];
        if(local_max > global_max)
        {
            global_max = local_max;
            start = s;
            end   = i;
        }
       if(local_max < 0 )
        {
            local_max = 0;
            s = i + 1;
        }
    }
    cout<<"start:"<<start<<"end:"<<end<<endl;
    return global_max;
}

int main()
{
    int arr[] = {-2, -3, -4, -1, 5, 1, -5, -3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = largest_sum_subarray(arr,size);
    cout<<"largest sum is:"<<x;
    return 0;
}