#include<iostream>
using namespace std;
template<typename Type>
void printValue(Type firstVar)
{
	cout<<"\nvalues is "<<firstVar;
}
template<typename Type,typename... Types >
void printValue(Type firstVar,Types... var)
{
	printValue(firstVar);
	printValue(var...);
}
int main()
{
	string names="deepak";
	
	printValue(7.5,"String",names);
	
}
