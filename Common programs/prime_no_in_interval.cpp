
//Time Complexity: O((R-L)*N), where N is the number, and L and R are the given range.

#include <iostream>
using namespace std;


int series(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if(i==0 || i==1)            //skip 0 and 1 as they are not prime no
        {
            continue;
        }  
          int flag=1;
        
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}



int main()
{
    int start,end;   
    cout << "enter start and end of series";
    cin >> start >> end;
  
    series(start, end);
}