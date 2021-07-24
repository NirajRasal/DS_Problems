//not wrorking


#include <bits/stdc++.h>
#include<array>
#include<map>

using namespace std;

void countfreq(int arr[])
{
    multimap<int,int> m;
    multimap<int,int> :: iterator it;

    for(int i=0; i<10; i++)
    {
        m[arr[i]]++;
    }
    cout<<"element inserted in map";

    
    
    for(auto it : m)
    {
        cout<<" "<<it.first<<" "<<it.second;
    }

}

int main()
{
    int arr[10] = { 2,4,6,8,2,6,9,12,8,7 };

    countfreq(arr);
    return 0;
}