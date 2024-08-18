#include<iostream>
using namespace std;
template<typename Type>
class List
{
		public :
		virtual void setData(Type value)=0;
		virtual Type getData()=0;
		
};
template<typename Type>
class Vector:public List<Type>
{
	Type number;
	public:
	void setData(Type value)
	{
		this->number=value;
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
	void setData(Type value)
	{
		this->number=value;
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
	void setData(Type value)
	{
		this->number=value;
	}	
	Type getData()
	{
		return this->number;
	}
};
template<typename Type>
void callMe(List<Type>*obj,Type value)
{
	obj->setData(value);
	cout<<"\n\t value : "<<obj->getData();
}
int main()
{
	Vector<float> obj1;
	ArrayList<double> obj2;
	LinkedList<int> obj3;
	callMe(&obj1,1.2f);
	callMe(&obj2,2.3);
	callMe(&obj3,23);
}

