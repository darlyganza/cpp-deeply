#include <iostream>
#include<cstring>
using namespace std;
	//user defined function better defined before the main:
//	function overloading : giving functions same name but the parameters are different and some of the same parameters have different data types

int sum(int a, int b){
	return a+b;
}
	double sum(double a, double b){
		int sum = a+b;
		return sum;
	}
	//function can be defined but not manipulated: i.e function prototype: 
	int multiplication(int a, int b);
int main(){
	cout<<sum(12,2);
	
	//functions can also be called and passed to main variables: i.e
	int altogether, x=1, y=3;
	altogether = sum(x,y);
	cout<<"\n"<<altogether<<endl;
	//function overloading: a way to define a function in different ways and assigning the desired values
	cout<<sum(12.2,12.2);
	
	
	//function templates (defining a function so that it can operate on arguments of any data type:
	
	
	return 0;
}
