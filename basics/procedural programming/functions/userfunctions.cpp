//program implementing cpp functions: independent but smaller components in cpp programs:
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int myNum = 16;
	double angle =60;
	cout<<sqrt(myNum)<<"\n";
	cout<<floor(12.87)<<"\n";
	cout<<ceil(12.87);
//printing the maximum value in a certain input of values:
double maxVal = fmax(12,8);
cout<< "The maximum value is: "<<maxVal;
double minVal = fmin(12,8);
cout <<"\nWhile the minimum value is: "<<minVal;
	return 0;
}
