#include<iostream>
using namespace std;
template<typename Type>
class Node
{
	public:
	Type keyValue;
	Node<Type>* nextPtr; 
};
template<typename Type>
class LinkedList
{
	private:
	Node<Type> *basePtr;
	Node<Type> *previousPtr;
	public:
	LinkedList()
	{
		basePtr=NULL;
		previousPtr=NULL;
	}
	void addNode(Type key)
	{
	    Node<Type> *currPtr;
	    currPtr=new Node<Type>;
		currPtr->keyValue=key;
		currPtr->nextPtr=NULL;
		if(basePtr==NULL)
		{
			basePtr=currPtr;
			previousPtr=currPtr;
			return;
		}
		previousPtr->nextPtr=currPtr;
		previousPtr=currPtr;
	}
	void showAll()
	{
		Node<Type> *baseCopy=basePtr;
		while(baseCopy!=NULL)
		{
			
			cout<<baseCopy->keyValue<<"->";
			baseCopy=baseCopy->nextPtr;
		}
		cout<<"NULL";
	}
};
int main()
{
	LinkedList<int> obj=LinkedList<int>();
	LinkedList<float> obj1=LinkedList<float>();
	obj.addNode(12);
	obj.addNode(13);
	obj.addNode(14);
	obj.addNode(15);
	cout<<"\n\tlist1 : ";
	obj.showAll();
	obj1.addNode(1.2);
	obj1.addNode(1.3);
	obj1.addNode(1.4);
	obj1.addNode(1.5);
	cout<<"\n\tlist2 : ";
	obj1.showAll();
}
