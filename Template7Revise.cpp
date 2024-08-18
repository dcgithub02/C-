#include<iostream>
using namespace std;
template<typename Type,typename...Types>
void printValue(Type firstVar,Types... secondVar)
{
	cout<<sizeof...(Types);
	cout<<sizeof...(secondVar);	
}
int main()
{
	string name="rajat";
	printValue(89,"deepak",name);
}
