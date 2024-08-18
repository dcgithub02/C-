#include<iostream>
using namespace std;
template <typename Type1,typename Type2>
class Assign
{
	private:
	Type1 number1;
	Type2 number2;
	public:
	Assign(Type1 number1,Type2 number2)
	{
		this->number1=number1;
		this->number2=number2;
	}
	Type1 getNubmer1()
	{
		
		
		return this->number1;
	}
	Type2 getNumber2()
	{
		return this->number2;
	}
	void showNumber1()
	{
		cout<<"\n"<<this->number1;
	}
		void showNumber2()
	{
		cout<<"\n"<<this->number2;
	}
	
	
};
int main()
{
	Assign<int,float> obj(10,12.5);
	obj.getNubmer1();
	obj.showNumber1();
	obj.getNumber2();
	obj.showNumber2();
}
