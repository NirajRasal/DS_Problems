/*

pattern:
  
      *
    * *
  * * * 
* * * *

*/
#include<iostream>

using namespace std;

int main()
{
    int totalRows;
    cout<<"enter the rows"<<endl;
    cin>>totalRows;
    int blankSpace,printCharacter;
    for(int Rows=1;Rows<=totalRows;Rows++)
    {
        for(blankSpace=totalRows-Rows;blankSpace>=1;blankSpace--)                    //to print blank spaced
        {
            cout<<" ";
        }
        for(printCharacter=1;printCharacter<=Rows;printCharacter++)      //to print the charactrer or number
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}