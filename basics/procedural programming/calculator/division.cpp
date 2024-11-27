#include <iostream>
using namespace std;
int main(){
	int num1, num2, quotient;
	double remainder;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<< "Enter the second number: ";
	cin >> num2;
	quotient = num1/num2;
	remainder = num1%num2;
	cout<<"The quotient of "<< num1<<" and "<< num2<<" is: " <<quotient<<"\nThe remainder is: "<<remainder<< endl;
	return 0;
}
