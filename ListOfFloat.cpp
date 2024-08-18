#include<iostream>
using namespace std;
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
	int index;
	float value1;
	ListOfFloat obj1(5);
	for(index=0;index<5;index++)
	{
		cout<<"Enter the value :";
		cin>>value1;
		obj1.add(value1);
	}
	
	value1=obj1.get(1);
	cout<<"value is "<<value1;
}
