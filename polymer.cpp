#include<iostream>
#include<process.h>
using namespace std;
class ContainerOfInts 
{
	public:
	virtual int getSize()=0;
	virtual int& elementAtPos(int index)=0;
	virtual void showData()=0;
	virtual void setData(int value)=0;
};
class ArrayOfInts : public ContainerOfInts 
{
	int* data;
	int sizeOfArray;
	int count;
	public:
	ArrayOfInts()
	{
		this->sizeOfArray=50;
		this->count=0;
		this->data= new int[this->sizeOfArray];
	}

	void setData(int value)
	{
		if(this->count<this->sizeOfArray)
		{
			this->data[this->count]=value;
			this->count++;
		}
		else
		{
			cout<<"\n\tindex out of bounds...";
			return;
		}
	}
	
	int getLength()
	{
		return this->sizeOfArray;
	}	
	int getSize()
	{ 
		return this->count; 
	}
	int& elementAtPos(int index) 
	{ 
		return data[index]; 
	}
	void showData()
	{
		int index;
		for(index=0;index<this->count;index++)
		{
			cout<<"\nValue of list is "<<this->data[index];
		}
	}
};
class ListOfInts : public ContainerOfInts 
{
	struct Node 
	{
		int data;
		Node *next;
	};
	Node *headPtr;
	Node *prevPtr;
	int sizeOfList;
	public:
	ListOfInts()
	{
		this->headPtr = NULL;
	    this->sizeOfList = 2;
	}
	void setData(int value)
	{
		Node *nodePtr;
		nodePtr=new Node;
		nodePtr->data=value;
		nodePtr->next=NULL;
		if(headPtr==NULL)
		{
			headPtr=nodePtr;
			prevPtr=nodePtr;
			return ;
		}
		prevPtr->next=nodePtr;
		prevPtr=nodePtr;
		
	}
	int getSize() 
	{ 
		return sizeOfList; 
	}
	void showData()
	{
		Node *nodePtr;
		nodePtr=this->headPtr;
		while(nodePtr!=NULL)
		{
			cout<<"\nvalue in list is " <<nodePtr->data;
			nodePtr=nodePtr->next;
		}
	}
	int& elementAtPos(int index) 
	{
		Node *nodePtr = headPtr;
		if (index >= sizeOfList)
		{
			cout<<"\n\tindex out of range...";
			system("pause");
			exit(0);
		} 
		for (int counter=0; counter<index; ++counter) 
		{
			nodePtr = nodePtr->next;
		}
		return nodePtr->data;
	}
	~ListOfInts(){}
};
void doubleEachElement(ContainerOfInts& arr)
{
	for(int index=0; index < arr.getSize(); ++index) 
	{
		arr.elementAtPos(index) *= 2;
	}
}
int main()
{
	int index;
	int value;
	ArrayOfInts arr;
//	for(index=0;index<5;index++)
//	{
//		cout<<"Enter value";
//		cin>>value;
//		arr.setData(value);
//	}
//	arr.showData();
//	value=arr.elementAtPos(1);
//	cout<<"\n\tvalue is "<<value;
//	doubleEachElement(arr);
//	value=arr.elementAtPos(1);
//	cout<<"\n\tvalue is "<<value;
//	

	ListOfInts lst;
	cout<<"Enter value";
	cin>>value;
	lst.setData(value);
	cout<<"Enter value";
	cin>>value;
	lst.setData(value);
	lst.showData();
	value=lst.elementAtPos(0);
	cout<<"\nvalue is"<<value;
	doubleEachElement(lst);
	value=lst.elementAtPos(0);
	cout<<"\nDouble value is "<<value;
}

