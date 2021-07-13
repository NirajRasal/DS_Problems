

#include<iostream>

using namespace std;

void arm(int n)
{
    int temp,r;
    temp=n;
    int sum=0;
    /*for(;n>0;)        using for loop
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }*/

                     // using while loop
    while(n>0)    
    {    
        r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
    }
    cout<<sum<<endl;        //for debugging purpose
       
    if(temp==sum)
    {
        cout<<"no is Armstrong";
    }
    else
    {
       cout<<"no is not Armstrong";
    }
}
 
int main() {
    int no;
    cout<<"enter any no:";
    cin>>no;
    arm(no);
    return 0;
}
