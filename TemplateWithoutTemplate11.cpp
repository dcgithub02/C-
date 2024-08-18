#include<iostream>
using namespace std;
template<typename Type,int SIZE>
class GenericClsNonArgument
{
	private:
	Type * array;
	int size;
	int index=0;
	public:
	GenericClsNonArgument()
	{
		array = new Type[SIZE];
		this->size=SIZE;
	}
	
	void setData(Type number)
	{
		if(this->index<SIZE)
		{
		this->array[this->index]=number;
		this->index++;
		}	
		else
		{
			cout<<"array index out of bound";
		}
	}
	
	Type getData(int counter)
	{
		if(counter<SIZE)
		{
			return this->array[counter];
		}
		else
		{
			cout<<"please enter valid index ";
		}
		
	}
	
};

int main()
{
	int value;
	GenericClsNonArgument<int,5> obj;
	obj.setData(12);
	obj.setData(11);
	obj.setData(10);
	obj.setData(9);
	obj.setData(8);
	value=obj.getData(2);
	cout<<value;
}
