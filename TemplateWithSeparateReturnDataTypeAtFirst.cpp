#include<iostream>
using namespace std;
template<typename Rtype,typename type1,typename type2>
Rtype add(type1 num1,type2 num2)
{
	Rtype sum;
	sum=num1+num2;
	return sum;
}
int main()
{
	float sum;
	sum=add<float,float,int>(10.5f,20);
	cout<<sum;
	sum=add<float>(10.5f,20);
	cout<<endl<<sum;
}
