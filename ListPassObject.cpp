#include<iostream>
using namespace std;
class Demo1
{
	int number;
	public:
	Demo1(int number=0)
	{
		this->number=number;
	}
	int	getNumber()
	{
	return this->number;
	}
};
template<typename Type>
class List2
{
	Type *arrPtr;
	int index;
	int SIZE;
	public:
		List2()
		{
			this->SIZE=20;
			this->arrPtr= new Type[this->SIZE];
			this->index=0;
		}
		List2(int size)
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
};
int main()
{
	int value;
	List2<Demo1> obj(5);
	Demo1 temp;
	obj.add(Demo1(1));
	obj.add(Demo1(2));
	obj.add(Demo1(3));
	obj.add(Demo1(4));
	obj.add(Demo1(5));
	temp=obj.get(0);
	value=temp.getNumber();
	cout<<value;	
}
