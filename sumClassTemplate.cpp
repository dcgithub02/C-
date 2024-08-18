#include<iostream>
using namespace std;
template <typename Type1,typename Type2>
class Sum
{
	private:
	Type1 number1;
	Type2 number2;
	//Type sum;
	public:
	Sum(Type1 number1,Type2 number2)
	{
		this->number1=number1;
		this->number2=number2;
	}
	Type sumOfTwoDigits()
	{
		
		this->sum=this->number1+this->number2;
		return this->sum;
	}
	void display()
	{
		cout<<this->sum;
	}
	
	
};
int main()
{
	Sum<float,int,float> obj(12,10.5);
	obj.sumOfTwoDigits();
	obj.display();
}
