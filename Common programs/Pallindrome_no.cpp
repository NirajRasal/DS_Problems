#include<iostream>

using namespace std;

int pallindrome(int no)
{
    int temp=no;
    int sum=0;
    int r;
    while(no > 0)
    {
        r = no % 10;
        sum=(sum*10)+r;    
        no = no / 10; 
    }

    if(temp == sum)
    {
        cout<<"no is pallindrome";
        return 0;
    }
    else
    {
        cout<<"no is not pallindrome";
        return 0;
    }
    
}

int main()
{
    int no;
    cout<<"enter number:";
    cin>>no;
    pallindrome(no);
}