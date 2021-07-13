//https://www.geeksforgeeks.org/find-divisors-natural-number-set-1/
//https://www.geeksforgeeks.org/find-all-divisors-of-a-natural-number-set-2/


#include<bits/stdc++.h>

using namespace std;

void findfactor(int no)
{
    for(int i=2;i<=no/2;i++)
    {
        if(no % i == 0)
        {
            cout<<i<<" ";
        }
    }

}

int main()
{
    int no;
    cin>>no;
    findfactor(no);
    return 0;
}