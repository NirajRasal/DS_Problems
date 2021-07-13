/*
 Vector Introduction:

 Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is
 inserted or deleted, with their storage being handled
 automatically by the container.Vector elements are placed in contiguous storage so that they can be accessed
 and traversed using iterators.
 In vectors, data is inserted at the end.Inserting at the end takes differential time, as sometimes there may be
 a need of extending the array.
 Removing the last element takes only constant time because no resizing happens.
 Inserting and erasing at the beginning or in the middle is linear in time.

 */

#include<bits/stdc++.h>

using namespace std;
  
int main()
{
    vector<int> v;
  
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }
    cout << "Output of begin and end: ";
    for (auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}