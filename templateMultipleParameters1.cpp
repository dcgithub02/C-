#include<iostream>
using namespace std;
template<typename Type,int SIZE>
class Array
{
	Type *arrayPtr;
	int sizeOfArray=SIZE;
	public:
		void setData(Type number);
		Type getData();
};
template<typename Type,int SIZE>
void Array<Type,SIZE>::setData(Type number)
{
	SIZE=67;
}
template<typename Type, int SIZE>
Type Array<Type,SIZE> :: getData()
{
	
}
int main()
{
	Array<int,50> obj1;
	Array<float,20>obj2;
}
