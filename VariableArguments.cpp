#include<iostream>
using namespace std;
void printValue()
{
	
}
template<typename Type,typename...Types>
void printValue(Type firstArg,Types...varArgs)
{
	cout<<"\n\t firstArg:"<<firstArg;
	printValue(varArgs...);
}
int main()
{
	string name="prayog";
	printValue(7.5,"hello",name);
}
