/*
Fun Fact:   this program and basic_pattern2 program is almost identical 
            to print triangle you just have to print space after character/number.
*/


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
            cout<<colCharacter<<" ";                                /*don't forget to put space after printing 
                                                                    to get shape of triangle*/
        }
        cout<<endl;
    }
}