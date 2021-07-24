/*implemented using binary searach tree */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> s1;
    //set <int, greater<int>> s;   sort in desending order

    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    if(s1.count(40))                          //return 1 if found else 0
    {
        cout<<"element is present in map"<<endl;
    }
    else
    {
        cout<<"element is not present in set"<<endl;   
    }

    set<int>::iterator it;
    it = s1.find(50);         //it return iterator pointing to value else return end of map
    if(it != s1.end())
    {
        cout<<"found "<<*it<<endl;
    }
    

    /*for(auto it : s1)
    {
        cout<<" "<<it.first<<" "<<it.second<<endl;
    }*/
    for(auto itr=s1.begin();itr!=s1.end();++itr)              //both for loops works same
    {
        cout<<*itr<<endl;
    }
    return 0;
}