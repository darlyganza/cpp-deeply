#include<iostream>
#include<string>
using namespace std;

int main(){
	string fullName;
double initialAmount;
double interestRate;
 double paymentTime;
double totalInterest ;
cout <<"Enter your full name: "<<endl;
cin>>fullName;
cout<<"Enter your initial earning amount: "<<endl;
cin>>initialAmount;
cout<<"Enter Your interest rate per year: "<<endl;
cin>>interestRate;
cout<<"Enter Your payment time in terms of years: "<<endl;
cin>>paymentTime;
totalInterest=initialAmount*interestRate*paymentTime/100; //take care on the placement of each statement;
cout <<fullName<<"; your total interest is: "<<totalInterest;

//using the cin will skip all the other statements from being stored into variables hence leading to unwanted results
	return 0;
}
