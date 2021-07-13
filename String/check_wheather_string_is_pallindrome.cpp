//not working

#include<bits/stdc++.h>
#include<cstring>

using namespace std;

void checkpallindrome(string str)
{
    string rev = str;

    reverse(str.begin(),str.end());
////////////////////////////////////////////////////////
    /*string rev;                               alternate way
    for(int i=str.length()-1;i>=0;i--)
    {
      rev.push_back(str[i]);
    }*/
////////////////////////////////////////////////////////
   if(str == rev)
    {
        cout<<"string is pallindrome";
    }
    else
    {
        cout<<"string is not pallindrome";
    }
}

int main()
{
    string a;
    cout<<"enter string:";
    cin>>a;
    checkpallindrome(a);
    return 0;
}