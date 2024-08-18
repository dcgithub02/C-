#include<iostream>
using namespace std;
template<typename... Type>
auto sumOfTypes(Type... number)
{
	return (number+...);
}
int main()
{
	float total;
	total=	sumOfTypes(1+3.4f+4+10);
	cout<<total;
}
