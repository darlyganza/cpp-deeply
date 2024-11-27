#include<iostream>
using namespace std;
//program to print arrays in a list:
int main(){
	int arrayHold[]={1,2,3,4,5,5,6,6,7,7,12,34};
	int arraySize = sizeof(arrayHold)/sizeof(arrayHold[1]);//the total elements
	for (int i=0;i<arraySize;i++){
		cout<<arrayHold[i]<<", ";
		if (i=arraySize){
			cout<<arrayHold[i]<<".";
		}
	}
	return 0;
}
