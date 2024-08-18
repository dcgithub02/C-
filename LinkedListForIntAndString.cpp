#include<iostream>
using namespace std;
template<typename Type>
class Node
{
	public:
	Type key;
	Node<Type> *nextPtr;
};
template<typename Type>
class LinkedList
{
	private:
	Node<Type> *basePtr;
	Node<Type> *previousPtr;
	Type value;
	public:
	LinkedList()
	{
		basePtr=NULL;
		previousPtr=NULL;
	}
	
	void add(Type key)
	{
		Node<Type> *currentPtr;
		currentPtr= new Node<Type>;
		currentPtr->key=key;
		currentPtr->nextPtr=NULL;
		if(basePtr==NULL)
		{
			basePtr=currentPtr;
			previousPtr=currentPtr;
			return;
		}
		previousPtr->nextPtr=currentPtr;
		previousPtr=currentPtr;
	}
	void showAll()
	{
		Node<Type> *base= basePtr;
		while(base!=NULL)
		{
			cout<<base->key;
			cout<<" ";
			base=base->nextPtr;
		}
		cout<<"NULL";
	}
};
template<>
class LinkedList<char*>
{
	Node<char*> basePtr;
	Node<char*> previousPtr;
	LinkedList()
	{
		basePtr=NULL;
		previousPtr=NULL;
	}
	
	void add(char* key)
	{
		int length=0;
		Node<char*> *currentPtr;
		currentPtr= new Node<Type>;
		for(length=0;key[length]!='\0';length++);
		 currentPtr->key= new char[length];
		 for(length=0;key[length]!='\0';length++)
		 {
		 	currentPtr->key[length]=key[length];	
		 }
		
		if(basePtr==NULL)
		{
			basePtr=currentPtr;
			previousPtr=currentPtr;
			return;
		}
		previousPtr->nextPtr=currentPtr;
		previousPtr=currentPtr;
		
	}
	void showAll()
	{
		Node<Type> *base= basePtr;
		while(base!=NULL)
		{
			cout<<base->key;
			cout<<" ";
			base=base->nextPtr;
		}
	}
	
};
int main()
{
	LinkedList<int> obj= LinkedList<int>();
	obj.add(12);
	obj.add(14);
	obj.showAll();
	cout<<"  ";
	LinkedList<float> obj1= LinkedList<float>();
	obj1.add(1.2);
	obj1.add(1.4);
	obj1.showAll();

}
