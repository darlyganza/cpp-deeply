#include<iostream>
#include<cstring>
using namespace std;

int main(){
int charLen = strlen("Hello nice to be here today");
//using the strlen to see the number of characters contained:
cout<<"The characters in the sentence are: "<<charLen;

//string manipulation functions: These functions include: 
string str1 = "Hello ";
string str2 = " World";
cout<<"The string 1 and string 2 concantenated using the strcat: "<<strlen(str1.c_str());

return 0;
}
