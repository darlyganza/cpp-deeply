#include<iostream>
#include<string> //some programs may work just fine without using the directive and also using the #include<string.h>
using namespace std;
int main(){
	//using the string complex type with build in functions to deal with strings.
	string firstName= "Kim", lastName = "Jeon woo";//double quotes
	cout<< firstName << " is my first name and "<< lastName<< " is my last name"<<endl;
	//insert the letter index number in [] to print out the letter value: 
	cout<< firstName[0]<< " is the first letter of my first name"<<endl;
	cout<< lastName.length()<< " letters are in my last name"<<endl;
	//altering the contents(letters) in my firstName use the same approaches of indexes;
	lastName[2]= 'd';
	cout<<"my new last name is: \n"+lastName <<endl;
	
	//string concatenation
	//1. performed by using the + operator
	cout<<"Demonstration of string concetanation consider: "<<endl;
	string name1 = "GANZA";
	string name2= " Darlene";
	string fullName = name1+name2;
	cout <<endl<< "My full name is: "<<fullName<<endl;
//	2. using the strcat(string1, string2)

//getting user input strings We can use >> with cin:
string userLastName;
cout<<"Enter your name (last name) "<<endl;
cin >> userLastName;
cout <<"Hello "<<userLastName<<"; How are you doing?\n ";
//cin will ignore or consider whitespace or tab spaces as terminating characters

//using getline() function will meet all the limitations of cin:
string userName;
cout<<"Enter your whole name: "<<endl;
getline(cin, userName);
cout <<"Hello "<<userName;
	return 0;
}
