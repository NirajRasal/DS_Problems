// program to find the possible combination of sum of no to match given no.
//e.g 10= 1+2+3+4
//To-do:improve time efficiency of program
//Another logic:https://www.geeksforgeeks.org/express-number-sum-consecutive-numbers/?ref=lbp
#include <iostream>

using namespace std;

int main()
{
    int no;
    cout<<"enter the no"<<endl;
    cin >> no;
    int i=1;
    int op=0;

while(i<=100) 
{   
    if ((i) + (i+1) == no )      //combination of 2 digit
    {
        op++;
        cout << i << "+" << i+1<< endl;
        
    }                      
    if ((i) + (i+1) + (i+2) == no )      //combination of 3 digit
    {
        op++;
        cout << i << "+" << i+1 << "+" << i+2 << endl;
    }
    if( (i) + (i+1) + (i+2) + (i+3) == no)      //combination of 4 digit
    {
        op++;
        cout << i << "+" << i+1 << "+" << i+2 <<"+"<<i+3<< endl;
    }
    if ((i) + (i+1) + (i+2) + (i+3) + (i+4) == no )      //combination of 5 digit
    {
        op++;
        cout << i << "+" << i+1 << "+" << i+2 <<"+"<<i+3<<"+"<<i+4<< endl;
    }
    i++;
}
cout<<"total ways for addition of consecutive no is:"<<op;
    return 0;
}