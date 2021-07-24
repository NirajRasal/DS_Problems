
#include<iostream>
#include<string>

using namespace std;

int pallindrome(string str)
{
    string temp="";
    int flag=0,i,j;
    int len = str.size();
    cout<<"length:"<<len<<endl;
    for(i=0;i < len ;i++)
     {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
     }

    if (flag > 0)
    {
        cout << str << " is not a palindrome";
        return 0;
    }
    else
    {
        cout << str << " is a palindrome";
        return 0;
    }
    
}


int main()
{
    string s;
    cout<<"enter string:";
    getline(cin,s);
    pallindrome(s);
    //pallindrome_using_swap(s);
    return 0;
}