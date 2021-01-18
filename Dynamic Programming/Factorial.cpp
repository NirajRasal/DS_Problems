//Time complexity of simple recursive factorial is:
//Time complexity of factorial using memoization is:

#include <iostream>

using namespace std;

/*
int fact(unsigned long int no)      normal factorial function
{
    if(no > 1)
    {

        return no * fact(no-1);
    }
    else{
        return 1;
    }
}
*/

int fact(int n)                 //factorial using dynamic programming
{
    int result[1000] = {0};
    if (n >= 0)
    {
        result[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
    
}

int main()
{
    unsigned long int a;
    cout << "enter the no:";
    cin >> a;
    cout << "factorial is:" << fact(a);
    return 0;
}