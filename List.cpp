#include<iostream>
using namespace std;
class Demo
{
	int number1;
	public:
	void setNumber1(int number1)
	{
		this->number1=number1;
	}
	int getNumber1()
	{
		return this->number1;
	}
};	
template<typename Type>
class List
{
	Type* arrayPtr;
	int sizeOfArray;
	int index;
//	Demo temp;
	public:
	List()
	{
		this->arrayPtr=new Type[10];
		this->sizeOfArray=10;
		this->index=0;
	}
	List(const int SIZE)
	{
		this->arrayPtr=new Type[SIZE];
		this->sizeOfArray=SIZE;
		this->index=0;
	}
	void add(Type value)
	{
//		Type *arrPtr2;
//		int count=0;
//		if(index==this->sizeOfArray-1)
//		{
//			arrPtr2= new Type[sizeOfArray+sizeOfArray/2];
//			arrPtr2=this->arrayPtr;
//			for(count=0;count<(sizeOfArray+sizeOfArray/2);count++)
//			{
//				cout<<arrPtr2[count];
//			}
//				this->arrayPtr= new Type[sizeOfArray+sizeOfArray/2];
//				this->arrayPtr=arrPtr2;
//				this->arrayPtr[index+1]=value;
//				return;
//		}
		this->arrayPtr[index]=value;
		this->index++;
	}
	void add(int index,Type value)
	{
		this->arrayPtr[index]=value;
		
	}
	void clear()
	{
		int count=0;
		for(count=0;count<this->sizeOfArray;count++)
		{
			this->arrayPtr[count]=-1;
		}
	}
	int contains(Type value)
	{
		int count=0;
		for(count=0;count<this->sizeOfArray;count++)
		{
			if(this->arrayPtr[count]==value)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}	
	}
	Type get(int index)
	{
		return this->arrayPtr[index];
	}
	int indexOf(Type value)
	{
		int index=0;
		int count=0;
		for(count=0;count<this->sizeOfArray;count++)
		{
			if(this->arrayPtr[count]==value)
			{
				return count;
			}
		}
		
	}
	List<Type> subList(int fromIndex,int toIndex)
	{
		int count=0;
		int count1=0;
		List<Type> tempObj(toIndex-fromIndex);
		for(count=fromIndex;count<toIndex;count++)
		{
			tempObj.arrayPtr[count1]=this->arrayPtr[count];
			count1++;
		}
		return tempObj;
	}
	
};
int main()
{
	int index;
	int value;
	List<int> obj;
	List<int> obj1;
	List<Demo> obj4;
	//Demo obj5;
	obj.add(12);
	obj.add(24);
	obj.add(36);
	obj.add(4);
	value=obj.get(0);
	cout<<"\n\tvalue : "<<value;
	/*index=obj.indexOf(12);
	cout<<index;
	//index=obj.contains(12);
	cout<<index;*/
	//obj.clear();
	value=obj.get(0);
	cout<<"\n\tvalue : "<<value;
	value=obj.get(1);
	cout<<"\n\tvalue : "<<value<<"\n";
	obj1=obj.subList(0,3);
	value=obj1.get(1);
	cout<<"\n\tvalue : "<<value;
	obj4.
	cout<<value;
	
}
