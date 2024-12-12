#include<iostream>
using namespace std;

int impLinearSearch(int arr[],int value, int len){
int i=0,pos;
for (i;i<len;i++){

	if(arr[i]==value){
		pos = i;
	}
}
return pos;
}
int main(){
	int numArr[]={12,3,5,6,12,4,23,54,89,12};
	int val =4;
	int out;
	int len = sizeof(numArr)/sizeof(numArr[0]);
	out = impLinearSearch(numArr,val,len);
	cout<<"The position of "<<val<<" is "<<out;
	return 0;
}
