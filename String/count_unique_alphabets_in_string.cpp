//not working

#include<bits/stdc++.h>

using namespace std;


void display_set(set<char> s1)
{
   for (auto itr : s1)
    {
        cout << itr<<"\n";

    }
    cout<<"count using set:"<<s1.size();
}

void countDistinct(string s) 
{ 

    unordered_map<char, int> m; 

    for (int i = 0; i < s.length(); i++) { 
        m[s[i]]++; 
    } 
   for(auto elem : m)
    {
        cout << elem.first <<" "<< elem.second << "\n";
    }

    cout<<"count using map:"<<m.size()<<endl; 
} 

void countDistinct_using_set(string s) 
{ 

    set<char> s1; 

    for (int i = 0; i < s.size(); i++) { 
        s1.insert(s[i]); 
    } 

    cout<<"count using set:"<<s1.size(); 
} 



int main()
{
    set<char>s1;
    string s="hello";
     for(int i=0;i<s.size();i++)
    {
        s1.insert(s[i]);
    }
       
    countDistinct(s);                       //using unordered map
    countDistinct_using_set(s);             //using set
    // display_set(s1);
    return 0;

}