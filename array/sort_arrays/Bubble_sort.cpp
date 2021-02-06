//Bubble sort compares adjusent two elements to find out the lowest/greatest no

#include <iostream>

using namespace std;
void bubble(int arr[],int size)
{
    int temp;
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout <<" Sorted array:";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

}
int main()
{
    int arr[10];
    int size=5;
    cout << "Enter the array";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    bubble(arr,size);
    return 0;
}