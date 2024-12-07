#include<iostream>
#include<string>
#include<cctype>

using namespace std;
int main(){
	
	//program to demonstrate some of the cpp string manipulation functions:

//Checking if a character is digit or not: 

char myChar = '3',
myChar2= 'a';
char space = ' ';
cout<<"3 is digit? "<<isdigit(myChar);
cout<<"\na is digit? "<<isdigit(myChar2);
// 1 for true and 0 for false

cout<<"\n3 is alpha? "<<isalpha(myChar);
cout<<"\na is alpha? "<<isalpha(myChar2);
cout<<"\n"<<isupper(myChar2)<<" in uppercase";
cout<<"\nis "<<isblank(space);
	return 0;
}
