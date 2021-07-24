#include<iostream>
#include<string>

using namespace std;


/*
string findstr(string s,string str) {
    //string str = "hackerrank";
    int len = str.length();
    
    if(s.length() < str.length())
    {
        return "NO";
    }
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (j < str.length() && s.at(i) == str.at(j)) {
                    j++;
            }
        }
    return (j == str.length() ? "YES" : "NO");

}*/
int strfind(string str,string pat)
{
    static int count;
    int pos = str.find(pat);
    if(str.find(pat) == string::npos){        //The position of the first character of the first match.
                                            //If no matches were found, the function returns string::npos(-1).
        cout<<"pattern not found";
        return 0;
    }
    if(pos!= string::npos)
    {
        count++;
        cout<<"found at index"<<pos;
          if(count > 0)
        {
             cout<<"count is"<<count;
        }
         return 0;
    }
  
   
}
int main()
{
    string str,pat;
    getline(cin,str);
    getline(cin,pat);
    //findstr(str,pat);
    strfind(str,pat);
    
    return 0;

}