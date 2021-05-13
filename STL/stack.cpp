/*empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) */


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;    //stack of integer type is created 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();

    if(s.empty())
    {
        cout<<"stack is empty";
    }

    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    return 0;
}