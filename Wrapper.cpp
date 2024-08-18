#include<iostream>
using namespace std;
class Integer
{
	int num;
	public:
	Integer(int num=0)
	{
		this->num=num;
	}
	int get()
	{
		return this->num;
	}
};
class Float
{
	float num;
	public:
	Float(float num=0)
	{
		this->num=num;
	}
	float get()
	{
		return this->num;
	}
};
class Class3
{
	int num;
	public:
	Class3(int num=0)
	{
		this->num=num;
	}
	int get()
	{
		return this->num;
	}
};
template<typename Type>
class List
{
	Type* arrayPtr;
	int sizeOfArray;
	int index;
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
		for(count=0;count<sizeOfArray;count++)
		{
			if(arrayPtr[count].get()==value.get())
			{
				return 1;
			}
		}
		return(0);	
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
	Integer obj1(12),obj2(13),obj3(14),obj4(15);
	Float obj11(1.2),obj22(1.3),obj33(1.4),obj44(1.5);
	Integer temp;
	Float temp1;
	List<Integer> obj;
	List<Float> objFloat;
	List<Float> subList1;
	objFloat.add(obj11);
	objFloat.add(obj22);
	objFloat.add(obj33);
	objFloat.add(obj44);
	temp1=objFloat.get(0);
	cout<<"\n\tvalue : "<<temp1.get();
	cout<<"\n\tcontains : "<<objFloat.contains(obj22);
//	subList1=objFloat.subList(1,3);
//	temp1=subList1.get(0);
//	printf("%f",temp1);
	
}
