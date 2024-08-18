#include<iostream>
using namespace std;
template<typename Type,int SIZE>
class Queue
{
	private:
	Type *number;
	int front,rear,sizeOfQueue,elementCount;
	public:
	Queue()
	{
		this->number= new Type[SIZE];
		this->sizeOfQueue=SIZE;
		this->front=0;
		this->rear=0;
		this->elementCount=SIZE;
	}
	int add(Type value)
	{
		if(this->elementCount==0)
		{
			cout<<"\nMemory full,cannot add more element";
			return 1 ;
		}
		if(this->elementCount>0)
		{
			if(this->front!=0)
			{
				this->front--;
				this->front=(this->front)%(this->sizeOfQueue);
				this->number[this->front]=value;
				this->elementCount--;
				return 1;
			}
			this->rear=(this->rear)%(this->sizeOfQueue);
			this->number[this->rear]=value;
			this->rear++;
			this->elementCount--;
			return 1;
	}	
}
	void remove()
	{
		if(this->elementCount<SIZE)
		{
			this->front++;
			this->elementCount++;
		}
	}
	void showAll()
	{
		int count;
		for(count=this->front;count<this->rear;count++)
		{
			cout<<"\n"<<this->number[count];
		}
	}
	void insert(int index,Type value)
	{
		Type temp;
		this->rear=this->rear+1;
		if(index<this->rear)
		{
			temp=this->number[index];
			this->number[index]=value;
			index=index+1;
			int count=index;
			
			while(index<this->rear)
			{
				if(count==index)
				{
					this->number[index]=temp;
					index++;
				}
				else
				{
					this->number[index++]=this->number[count];
					count++;
				}
			}
		}
		else
		{
			cout<<"\nindex out of bound exception";
		}
	}
};
int main()
{
	Queue<int,5> obj;
	obj.add(1);
	obj.add(2);
	obj.add(3);
	obj.add(4);
	obj.add(5);
	obj.showAll();
	cout<<"\n*************";
	obj.remove();
	obj.showAll();
	cout<<"\n*************";
	obj.remove();
	cout<<"\n*************";
	obj.showAll();
	cout<<"\n adding again....";
	obj.add(50);
	obj.add(60);
	obj.showAll();
	cout<<"\ntrying to add more elements ......";
	obj.add(70);
	obj.showAll();
}
