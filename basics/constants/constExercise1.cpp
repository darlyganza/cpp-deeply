#include<iostream>
using namespace std;
#define Pi 3.14159265

int main(){
	double radius;
	double diam;
	double circum;
	double area;
	cout<<"Enter the radius: ";
	cin>>radius;
	diam=radius*2;
	circum= Pi * diam;
	area=Pi*((radius)*(radius));
	break;
	cout<<"The circumference of the circle is: "<<circum;
	cout<<"\nThe area of the circle is: "<<area<<endl;
	cout<<"Thank you for using my game";
	
	return 0;
}
