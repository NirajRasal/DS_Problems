// using string class provided in cpp
// https://www.geeksforgeeks.org/stdstring-class-in-c/

#include<iostream>
#include<string>

using namespace std;

int main () {

   string str1;
   string str2;
   string str3;
   int  len ;

    cout<<"enter two strings";
   getline(cin,str1);           //to take string input from user
   getline(cin,str2);

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total length of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

    //push_back function
    cout<<"before push back:"<<str1<<endl;
    str1.push_back('p');
    cout<<"after push back:"<<str1<<endl;

   return 0;
}