#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double opp, adj, hypo;
	//using the pow function from the cmath
	cout<<"Enter opposite side\n";
	cin>>opp;
	cout<<"Enter adjacent side\n";
	cin>>adj;
	hypo = sqrt(pow(opp,2)+pow(adj,2));
	cout<<"The hypotenuse of the triangle is: "<<hypo;	
	return 0;
}
