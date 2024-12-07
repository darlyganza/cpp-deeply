#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	
//program that counts the number of spaces in a string: 

char myText[] = "Hello there are you doing good?";
int textLen = sizeof(myText)/sizeof(myText[0]);
for (int i=0; i<textLen;i++){
	cout<<myText[i];
	if (isspace(myText[i])){
		cout<<i;
	}
};

	
		return 0;
}
