#include<iostream>
using namespace std;
template<typename Type,int SIZE>
class Queue
{
	private:
	Type *number;
	int front,rear,sizeOfQueue;
	public:
	Queue()
	{
		this->number= new Type[SIZE];
		this->sizeOfQueue=SIZE;
		this->front=0;
		this->rear=0;
	}
	void add(Type value)
	{
		if(this->rear==0)
		{
			this->number[this->rear]=value;
			this->front=this->rear;
			this->rear++;
			return;
		}
		this->number[this->rear++]=value;
	}
	void remove()
	{
		int count=this->front;
		this->rear=this->rear-1;
		while(count<this->rear)
		{
			this->number[count]=this->number[count+1];
			count++;
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
			cout<<"index out of bound exception";
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
	obj.remove();
	cout<<"\n";
	obj.showAll();
	//obj.insert(0,10);
	//cout<<"\nAfter insertion of element";
//	obj.showAll();
}
