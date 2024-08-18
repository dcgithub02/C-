#include<iostream>
using namespace std;
class Demo
{
	
	int num1,num2;
	public:
	Demo(int num1,int num2)
	{
		this->num1=num1;
		this->num2=num2;
	}
	
	int getNum1()
	{
		return this->num1;
	}
		int getNum2()
	{
		return this->num2;
	}	
};
template<typename Type>

class Arrays
{
	private:
	int index=0;
	Type *arr;
	int SIZE;
	public:
	Arrays(int size)
	{
		this->SIZE=size;
		this->arr= new Type[this->SIZE];
	}
	void add(Type value)
	{
		this->arr[this->index]=value;
		this->index++;
	}
	Type get(int count)
	{
		return this->arr[count];
	}
};

int main()
{
	int value;
	float value1;
	Arrays<int> obj(5);
	Arrays<Demo> obj22(1,2);
	obj.add(12);
	obj.add(24);
	value=obj.get(1);
	cout<<"values is :";
	cout<<value;
	Arrays<float> obj1(5);
	obj1.add(1.2);
	obj1.add(2.4);
	value1=obj1.get(1);	cout<<"\n values is :";
	cout<<value1;
	obj3.
}
