/*Map is implemented as balanced tree structure that is why it is possible to maintain an order between
 the elements (by specific tree traversal). Time complexity of map operations is O(Log n) while for 
 unordered_map, it is O(1) on average. 
*/

/* Internally unordered_map is implemented using Hash Table, the key provided to map are hashed into 
indices of hash table that is why performance of data structure depends on hash function a lot but 
on an average the cost of search, insert and delete from hash table is O(1). */


#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <int,int> m;
    //map <int,int, greater<int>> m;   sort in desending order

    m[1] = 10;                  //differemt way of insert
    m[2] = 40;
    m[3] = 60;
    m[1] = 100;

    m.insert({ 4, 80 });

    m.insert(make_pair<int,int>(5,50));

    if(m.count(4))                          //return 1 if found else 0
    {
        cout<<"element is present in map"<<endl;
    }
    else
    {
        cout<<"element is not present in map"<<endl;   
    }

    map<int,int>::iterator it;
    it = m.find(5);         //it return iterator pointing to key else return end of map
    if(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<cout;
    }
    

    /*for(auto it : m)
    {
        cout<<" "<<it.first<<" "<<it.second<<endl;
    }*/
    for(auto itr=m.begin();itr!=m.end();++itr)              //both for loops works same
    {
        cout<<" "<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}