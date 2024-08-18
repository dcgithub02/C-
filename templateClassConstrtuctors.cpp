#include<iostream>
using namespace std;
template<typename Type>
class Array
{
	Type * arrayPtr;
	int sizeOfArray;
	public:
	Array(int size)
	{
		this->sizeOfArray=size;
		this->arrayPtr=new Type[size];
	}
    Array()
    {
    	this->sizeOfArray=50;
    	this->arrayPtr=new Type[50];
	}
		
};
