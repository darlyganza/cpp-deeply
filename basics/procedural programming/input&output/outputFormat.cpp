#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//formating the output can be done in various ways: 1. using the endl
	cout<<"This text was formatted for the next to be displayed just below this: "<<endl
		<<"Diplayed after the first line.";//The tab space can also help in this.
//using the setw()
cout<<"Line before using the setwidth "<<endl
<<"Line after using the "<<setw(2)<<"output";	
	return 0;
}
