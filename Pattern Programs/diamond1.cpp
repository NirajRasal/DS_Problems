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
        for(colSpace=rows;colSpace<TotalRows;colSpace++)         //to print the blank spaces 
        {
            cout<<" ";
        }
        for(colCharacter=1;colCharacter<=rows;colCharacter++)       //to print the character or number
        {
            
            //To-DO
            if(rows > 2 && colCharacter > 1)          //Unfinished logic
            {
                if(colCharacter == rows)
                {
                    cout<<"* ";
                    break;
                }
                break;
            }
            
            
                cout<<"* ";                                         
        }
       cout<<endl;
    }

    //Lower part of diamond

    /*for(int rows=1;rows<=TotalRows;rows++)
    {
        for(colSpace=1;colSpace<=rows;colSpace++)                           //to print spaces
        {
            cout<<"* ";
        }
        for(colCharacter=TotalRows-rows;colCharacter>=1;colCharacter--)     //to print character
        {
            cout<<" ";
        }
        cout<<endl;
    }*/

}
