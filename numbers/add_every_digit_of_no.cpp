#include<iostream>

using namespace std;

void add(int no)
{
    int r=0,remainder,quotient;
    while(no > 0)
    {
        remainder = no % 10;
        r=r+remainder;   
        no = no / 10;             
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
