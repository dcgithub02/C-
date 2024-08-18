#include<iostream>
using namespace std;
template<typename Type>
class Array
{
	Type *arrayPtr;
	int sizeOfArray;
	public :
		Array(int size);
		Array();
		
};
template<typename Type>
Array<Type>::Array(int size)
{
	this->sizeOfArray=size;
	this->arrayPtr= new Type[size];
	
}
template<typename Type>
Array<Type>::Array()
{
	this->sizeOfArray=50;
	this->arrayPtr= new Type[50];
}
int main()
{
	Array<int> obj1= Array<int>(50);
	Array<float>obj2= Array<float>(20);
}
