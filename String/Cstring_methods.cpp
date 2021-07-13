//https://www.cplusplus.com/reference/cstring/
//using cstring or string.h header file


#include <iostream>
#include<cstring>

using namespace std;

int main () {

   char str1[10] = "Hello";
   char str2[10] = "World";
   char str3[10];
   int  len ;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;

   // Compare Both Strings
   float temp = strcmp(str1, str2);
   if(temp == 0)
   {
       cout<<"String are same"<<endl;
   }
   else
   {
       cout<<"string are not same"<<endl;
   }


   // string::substr
  string str="We think in live, but we live in details.";
                                          
  //std::string str2 = str.substr (3,5);     // "think"

  size_t pos = str.find("live");   
  
  size_t pos1 = str.find("live");      // position of "live" in str

  //std::string str3 = str.substr (pos);     // get from "live" to the end

  cout <<pos<< '\n'<<pos1;

 
   

   return 0;
}