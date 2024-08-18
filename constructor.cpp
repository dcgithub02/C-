#include<iostream>
using namespace std;
class Upper
{
	int number2;
	public:
	Upper(int temp)
	{
		this->number2=temp;
		cout<<"\n\tin upper";
	}
};
class One : public Upper
{
	int number;
	public:
	One(int number=0):Upper(number)
	{
		this->number=number;
		cout<<"\n\tIn One";
	}
};
class Two : public One
{
	int number1;
	public:
	Two(int number,int number1):One(number)
	{
		this->number1=number1;
		cout<<"\n\tin two";
	}
};
int main()
{
	Two obj=Two(12,34);
}
	
