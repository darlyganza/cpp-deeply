#include <iostream>
#include<cstring>
using namespace std;
	//user defined function better defined before the main:
	int sum(int a, int b){
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
	cout<<"\n"<<altogether;
	return 0;
}
