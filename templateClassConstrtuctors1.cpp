#include<iostream>
using namespace std;
template<typename Type>
class Array
{
	Type * arrayPtr;
	int sizeOfArray;
	public:
	Array(int size=50)
	{
		this->sizeOfArray=size;
		this->arrayPtr=new Type[size];
	}

		
};
