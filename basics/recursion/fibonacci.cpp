#include <iostream>
using namespace std;
//function to implement the fibonnacci of a number;
	int fn(int n){
		if (n==0|| n ==1)
		return 1;
	else
		return n*fn(n-1);
	}
int main(){
	cout<<fn(3);
	return 0;
}
