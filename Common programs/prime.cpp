#include<iostream>

using namespace std;

int prime(int no)
{
    int count=0;
    for(int i=2;i<=no/2;i++)
    {
        if(no % i == 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout<<"no is prime";
         return 0;
    }
    else
    {
        cout<<"no is not prime";
         return 0;
    }
    return 0;
}

int main()
{
    int no;
    cout<<"enter no:";
    cin>>no;
    prime(no);
    return 0;
}