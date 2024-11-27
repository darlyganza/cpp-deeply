#include<iostream>
using namespace std;
namespace people{
	char name[8]="Darlene";
}
namespace person{
	string name="Darlene GANZA";
}

string name="Darly";
int main(){
//namespace allows to create scopes for identifiers in a certain scope as such it would be possible for them to have the same names;
double age;

cout<<people::name;
//:: the scope operator for accessing elements in the namespace
cout<<person::name;
	cout<<"Hello ";
	return 0;
}
