//priority is given to function instead of template 
#include<iostream>
using namespace std;
template<typename Type>
Type add(Type num1,Type num2)
{
	Type sum;
	cout<<"template call";
	sum = num1+num2;
	return sum;
}
int add(int num1,int num2)
{
	int sum;
	cout<<"function call";
	sum=num1+num2;
	return sum;
}
int main()
{
	int out;
	out=add(10,12);
	cout<<"\n\t out :"+out;
}
