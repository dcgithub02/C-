#include<iostream>
using namespace std;
class ListOfInteger
{
	private:
	int *arryOfInt;
	int sizeofArray;
	int index;
	public:
	ListOfInteger(int const SIZE)
	{
		this->arryOfInt = new int[SIZE];
		this->sizeofArray= SIZE;
		this->index=0;
	}
	void add(int value)
	{
		this->arryOfInt[index]=value;
		index++;
	}
	int get(int index)
	{
		return this->arryOfInt[index];
	}
};
class ListOfFloat
{
	private:
	float *arryOfInt;
	int sizeofArray;
	int index;
	public:
	ListOfFloat(int const SIZE)
	{
		this->arryOfInt = new float[SIZE];
		this->sizeofArray= SIZE;
		this->index=0;
	}
	void add(float value)
	{
		this->arryOfInt[index]=value;
		index++;
	}
	float get(int index)
	{
		return this->arryOfInt[index];
	}
};

int main()
{
	int index,value;
	float value1;
	ListOfInteger obj(5);
	for(index=0;index<5;index++)
	{
		cout<<"\nEnter the value :";
		cin>>value;
		obj.add(value);
	}
	value=obj.get(1);
	cout<<"\nvalue is "<<value;
	ListOfFloat obj1(5);
	for(index=0;index<5;index++)
	{
		cout<<"\nEnter the value :";
		cin>>value1;
		obj1.add(value1);
	}
	value1=obj1.get(1);
	cout<<"\nvalue is "<<value1;

}
