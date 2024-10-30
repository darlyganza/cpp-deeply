#include<iostream>
#include<string> //some programs may work just fine without using the directive and also using the #include<string.h>
using namespace std;
int main(){
	//using the string complex type with build in functions to deal with strings.
	string firstName= "Kim", lastName = "Jeon woo";//double quotes
	cout<< firstName << " is my first name and "<< lastName<< " is my last name"<<endl;
	//insert the letter index number in [] to print out the letter value: 
	cout<< firstName[0]<< " is the first letter of my first name"<<endl;
	cout<< lastName.length()<< " letters are in my last name\n";
	//altering the contents(letters) in my firstName use the same approaches of indexes;
	lastName[2]= 'd';
	cout<<"my new last name is: "+lastName;
	return 0;
}
