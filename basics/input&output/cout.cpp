#include <iostream>
using namespace std;
int main(){
	//making the basic decision if the user is allowed to continue playing the game
	//using the cpp cout:
	string name;
	int age;
	cout<<"Enter your name";
	cin>>name;
	cout<<"How old are you?";
	cin>>age;
	if(age<=17)
		cout<<"You are not allowed to continue playing";
	else
		cout<<"Dear"<<name<<"Enjoy the game!!";
	
	return 0;
}
