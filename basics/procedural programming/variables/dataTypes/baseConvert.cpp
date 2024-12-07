#include<iostream>
#include<iomanip>
//program to convert a number to different bases:
using namespace std;
int main(){
int number;
cout<<"Enter your number:\n";
cin>>number;
cout<<number<<" is: "<<dec<<number<<" in base 10\n";
cout<<number<<" is: "<<oct<<number<<" in base 8\n";
cout<<number<<" is: "<<hex<<number<<" in base 16\n";
	return 0;
}
