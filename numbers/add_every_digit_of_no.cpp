#include<iostream>

using namespace std;

void add(int no)
{
    int r=0,remainder,quotient;
    while(no > 10)
    {
        quotient = no / 10;         //divide no by 10 until no becomes less than 10
        remainder = no % 10;
        r=r+remainder;                //add all the remainder
        no=quotient;
    }
    if(no > 1 && no < 10)           // for single digit no.
    {
        r=r+no;
    }
    cout<<"addition of all digits is:"<<r;    
}

int main()
{
    int no;
    cout<<"enter the no:";
    cin>>no;
    add(no);
    return 0;
}
