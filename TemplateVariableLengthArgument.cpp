#include<iostream>
void printValue()
{
	
}
template<typename Type ,typename...Types>
void printValue(Type FirstArg,types... args)
{
	cout<<"\n\tvalue: ";
	printValue(args);
}
int main()
{
	string name="prayog";
	printValue(7.5,"hello",name,12,8.9);
}
