#include<iostream>
using namespace std;
class Integer
{
	int number;
	public:
	Integer(int number=0)
	{
		this->number=number;
	}
	int get()
	{
		return this->number;
	}	
};
class Float
{
	float number;
	public:
	Float(float number=0)
	{
		this->number=number;
	}
	float get()
	{
		return this->number;
	}	
};
template<typename Type>
class List3
{
	Type * arrPtr;
	int index;
	int SIZE;
	public:
	List3()
	{
		this->SIZE=10;
		this->index=0;
		this->arrPtr= new Type[10];
	}
	List3(int size)
	{
		this->SIZE=size;
		this->arrPtr= new Type[size];
		this->index=0;
	}
	void add(Type value)
	{
		this->arrPtr[this->index]=value;
		this->index++;
	}
	Type get(int index)
	{
		return this->arrPtr[index];
	}
	int contains(Type value)
	{
	//	List3<Type> temp;
		for(this->index=0;index<this->SIZE;index++)
		{
			if(arrPtr[index].get()==value.get())
			{
				return 1;
			}
		}
		return 0;
	}
};
int main()
{
	int value;
	List3<Integer> obj(5);
	Integer obj1(1),obj2(2),obj3(3),obj4(4),obj5(5);
	obj.add(obj1);
	obj.add(obj2);
	obj.add(obj3);
	obj.add(obj4);
	obj.add(obj5);
	value=obj.contains(obj2);
	cout<<value;
	
}
