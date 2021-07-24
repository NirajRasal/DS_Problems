#include<iostream>

using namespace std;


void swap_with_temp(int &a,int &b)          //passed by referenced
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(int &a,int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a=5,b=10;
    swap_with_temp(a,b);
    //swap(a,b);
    cout<<"a = "<<a<<" "<<"b = "<<b;
}