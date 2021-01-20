#include<iostream>

using namespace std;

int main()
{
     cout<<"enter the rows"<<endl;
    int TotalRows;
    cin>>TotalRows;
    cout<<endl<<endl;
    int rows,colSpace,colCharacter;
    for(int rows=1;rows<=TotalRows;rows++)                          //to print the rows
    {
        for(colSpace=TotalRows-rows;colSpace>=1;colSpace--)         //to print the blank spaces 
        {
            cout<<" ";
        }
        for(colCharacter=1;colCharacter<=rows;colCharacter++)       //to print the character or number
        {
            cout<<"* ";                                             /*don't forget to put space after printing 
                                                                    to get shape of triangle*/
        }
        cout<<endl;
    }

    for(int rows=1;rows<=TotalRows;rows++)
    {
        for(colSpace=1;colSpace<=rows;colSpace++)                           //to print spaces
        {
            cout<<" ";
        }
        for(colCharacter=TotalRows-rows;colCharacter>=1;colCharacter--)     //to print character
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
