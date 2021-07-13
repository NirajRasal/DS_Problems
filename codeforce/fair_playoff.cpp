#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int playoff(int arr[])
{
    int g1,g2;
    g1 = std::max(arr[0],arr[1]); //54
    g2 = std::max(arr[2],arr[3]); //29

    // arr[0] = 6 arr[1]= 54 arr[2]= 28 arr[3]=29

    if(g2 == arr[2] && g1 > arr[3])
    {
        if(g1 == arr[0] && g2 > arr[1])
        {
            cout<< "YES"<<endl;
            return 0;
        }
        if(g1 == arr[1] && g2 > arr[0])
        {
         cout<< "YES"<<endl;
         return 0;
        }
        else{
        cout<< "NO"<<endl;
        return 0;
        }
    }    
    
    else if(g2 == arr[3] && g1 > arr[2])
    {
        if(g1 == arr[1] && g2 > arr[0])
        {
         cout<< "YES"<<endl;
         return 0;
        }
        if(g1 == arr[0] && g2 > arr[1])
        {
            cout<< "YES"<<endl;
            return 0;
        }
        else
        {
            cout<< "NO"<<endl;
            return 0;
        }
    }
    else{
            cout<< "NO"<<endl;
            return 0;
        
    }
    

    return 0;
}

int main()
{
    
    int testcases;
    cin>>testcases;
    int arr[4];
    while(testcases >0 )
    {
        for(int i=0;i<4;i++)
        {
         cin>>arr[i];
        }
        playoff(arr);
        testcases--;
    }

      /*  int arr[4];
        for(int i=0;i<4;i++)
        {
         cin>>arr[i];
        }
        playoff(arr);
     */
    return 0;
}