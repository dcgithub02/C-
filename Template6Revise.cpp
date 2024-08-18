#include<iostream>
using namespace std;
void printValue()
{
	
}
template<typename Type,typename...Types>
printValue( Type firstVar,Types...secondVar) 
{
	cout<<"\nfirstVar"<<firstVar	;
	cout<<"\nsize is"<<sizeof...(Types);
	if(sizeof...(secondVar)>0)
	{
		printValue(secondVar...);
	}
}
int main()
{
	string name;
	name="rohan";
	printValue(5.6,7,name);
}
