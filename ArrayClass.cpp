#include<iostream>
using namespace std;
template<typename Type>
class Array
{
	Type *arr;
	int index;
	int SIZE;
	public:
	Array(int SIZE)
	{
		this->arr= new Type[SIZE];
		this->index=0;
		this->SIZE=SIZE;
	}
	void add(int value)
	{
		this->arr[this->index]=value;
	 	this->index++;
	}
	Type get(int index)
	{
		return this->arr[index];
	}
};
int main()
{
	int value;
	Array<int> obj(5);
	obj.add(1);
	obj.add(2);
	value=obj.get(0);
	cout<<value;
}
