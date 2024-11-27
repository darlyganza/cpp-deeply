#include<iostream>
using namespace std;
int main(){
	//cin function of the standard library i.e previously declared in the global variables of the iostream
	int x, number;
	cout<<"Enter one number and I'll print it out!!";
	cin >>x; //cout uses the stream extraction operators
	number = x;
	cout<<" The number you entered is: "<<number;
	return 0;
}
