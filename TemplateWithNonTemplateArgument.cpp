#include<iostream>
using namespace std;
template<typename Type,int SIZE>
class Array
{
	Type* arrayPtr;
	int sizeOfArray;
	int currentIndex;
	int currentSize;
	public:
		Array()
		{
			this->arrayPtr= new Type[SIZE];
			this->sizeOfArray=SIZE;
			this->currentIndex=0;
			this->currentSize=0;
		}
		void set(int number)
		{
			if(this->currentIndex<this->sizeOfArray)
			{
				arrayPtr[currentIndex]=number;
				currentIndex++;
				currentSize++;
			}
			else
			{
				cout<<"\n\tArray is full";
			}
		}
		int get(int index)
		{
			if(index<currentIndex)
			{
				return(this->arrayPtr[index]);
				
			}
			printf("\n\t index out of bound...");
		}
		int getCUrrentSize()
		{
			return (this->currentIndex);
		}
		
};
int main()
{
	Array<int,3> obj;
	int offset;
	obj.set(12);
	obj.set(67);
	obj.set(90);
	obj.set(50);
	obj.set(78);
	obj.set(33);
	for(offset=0;offset<obj.getCUrrentSize();offset++)
	{
		cout<<"\n\t"<<obj.get(offset);
	}
	obj.set(6);
}
