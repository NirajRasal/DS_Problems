#include <iostream>
using namespace std;

//Function to Rotate the array

//Main Function
int main()
{
 int n,i,k;
 //input: n - size of array, Rotation ny k posistions
 cout<<"Enter values n & k \n";
 cin>>n>>k;
 //Declaring array
 int a[n];
 //input elements of array
 cout<<"Input Array Elements\n";
 for(i=0;i<n;i++)
 cin>>a[i];
 //calling Rotation Function
 RotArray(a,n,k);

return 0;
}
