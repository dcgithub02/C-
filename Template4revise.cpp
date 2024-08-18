#include<iostream>
using namespace std;
void printValue()
{
	
}
template<typename Type,typename... Types>
void printValue(Type firstArg,Types...secondArg)
{
	cout<<"\nValue " <<firstArg;
	printValue(secondArg...);
}
int main()
{
	string name="taj";
	printValue(7.5,"Deepak",name);
}
