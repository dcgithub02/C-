#include<iostream>
using namespace std;
template<typename Type>
Type add(Type num1,Type num2)
{
	Type sum;
	sum= num1+num2;
	return sum;
}
int main()
{
	int out;
	float out1;
	out= add<int>(10,20);
	cout<<out;
	out1= add<float>(1.5f,1.5f);
	cout<<endl<<out1;
	
}
