#include<iostream>

using namespace std;

int fibo(int n)                    //recursion
{
    if (n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
    
}



int main()
{
    int no;
    cout<<"enter no:";
    cin>>no;
    int x = fibo(no);
    cout<<x;
    return 0;
}