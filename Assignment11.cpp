#include<iostream>
using namespace std;
class Base
{
	private:
	int number1;
	public:
	virtual	void setData(int number1)=0;
	virtual	int getNumber1()=0;
};
class Child1:public Base
{
	
	int number1;
	public:
	void setData(int number1)
	{
		this->number1=number1;
	}
	int getNumber1()
	{
		return this->number1;
	}
};
class Child2:public Base
{
	int number1;
	public:
	void setData(int number1)
	{
		this->number1=number1;
	}
	int getNumber1()
	{
		return this->number1;
	}
};
class Child3:public Base
{
	int number1;
	public:
	void setData(int number1)
	{
		this->number1=number1;
	}
	int getNumber1()
	{
		return this->number1;
	}
};

int independent(Base *ptr,int number)
{
	ptr->setData(number);
	cout<<"\n\tnumber : "<<ptr->getNumber1();
}

int main()
{
	Child1 obj1;
	Child2 obj2;
	Child3 obj3;
	independent(&obj1,23);
	independent(&obj2,12);
	independent(&obj3,88);
}
