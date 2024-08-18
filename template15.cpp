#include<iostream>
using namespace std;
template<typename Type>
class List
{
	public:
	virtual void setData(Type number)=0;
	virtual Type getData()=0;
};
template<typename Type>
class Vector:public List<Type>
{
	Type number;
	public:
	void setData(Type number)
	{
		this->number=number;
		
	}
	Type getData()
	{
		return this->number;
	}
};
template<typename Type>
class ArrayList:public List<Type>
{
	Type number;
	public:
	void setData(Type number)
	{
		this->number=number;
		
	}
	Type getData()
	{
		return this->number;
	}
};
template<typename Type>
class LinkedList:public List<Type>
{
	Type number;
	public:
	void setData(Type number)
	{
		this->number=number;
		
	}
	Type getData()
	{
		return this->number;
	}
};
template<typename Type>
void showAll(List<Type>*obj,Type value)
{
	obj->setData(value);
	cout<<"\n"<<obj->getData();
}
int main()
{
	Vector<float> obj1;
	ArrayList<double> obj2;
	LinkedList<int> obj3;
	showAll(&obj1,1.1f);
	showAll(&obj2,1.2);
	showAll(&obj3,22);
}

