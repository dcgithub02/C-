#include<iostream>
using namespace std;
template <typename type1,typename type2, typename Rtype>
Rtype add(type1 num1,type2 num2)
{
	Rtype sum;
	sum=num1+num2;
	return sum;
}
int main()
{
	int out;
	float out1;
	out = add<int,float,int>(10,10.5f);
	cout<<out;
	out1=add<float,int,float>(5.5f,5);
	cout<<endl<<out1;
	
}
