#include <iostream>

using namespace std;

int fact(int n)                        //recursive
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
    return 0;
}

int factorial(int n)               //iterative
{
     int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res*i;
    }
    cout<<res;
    return 0;
}

int main()
{
    int no;
    cout<<"enter no:"<<endl;
    cin>>no;

    int val = fact(no);         //recursive
    cout<<val<<endl;        
    
    factorial(no);              //iterative
    return 0;
}