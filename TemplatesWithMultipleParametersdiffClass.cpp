#include<iostream>
using namespace std;
template <typename Type1>
class Array
{
	Type1 num1;
	public:
	void setData(Type1 num1);

};
template<typename Type1>
void Array<Type1>::setData(Type1 number)
{
	
}
template <class Array>
class NewType
{
	int size;
	Array arr;
	NewType(Array arr);	
};
template<class Array>
 NewType<Array>::NewType(Array)
{
	this->size=10;
	//this->arr=Array;
}
int main()
{
	NewType<Array<int>> obj1;	
}
