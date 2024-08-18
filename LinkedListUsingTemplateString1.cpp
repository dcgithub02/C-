#include<iostream>
using namespace std;
template<typename Type>
class Node
{
	public:
	Type value;
	Node<Type> *nextPtr;
	
};
template<typename Type1>
class LinkedList
{
	private:
	Type1 value;
	Node<Type1> *basePtr;
	Node<Type1> *previousPtr;
	public:
	LinkdedList()
	{
		previousPtr=NULL;
		basePtr=NULL;
	}
	void add(Type1 key)
	{		
		Node<Type1> *currentPtr;
		currentPtr= new Node<Type1>;
		currentPtr->value=key;
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
		Node<Type1> *currentPtr;
		currentPtr=basePtr;
		while(currentPtr!=NULL)
		{
			cout<<currentPtr->value;
			cout<<" ";
			currentPtr=	currentPtr->nextPtr;
		}
	cout<<"NULL";
	}
};
template<>
class LinkedList<char *>
{
		private:
	char * value;
	Node<char*> *basePtr;
	Node<char*> *previousPtr;
	public:
	LinkdedList()
	{
		previousPtr=NULL;
		basePtr=NULL;
	}
	void add(char* key)
	{		
		Node<char*> *currentPtr;
		int length=0;
		currentPtr= new Node<char*>;
		for(length=0;key[length]!='\0';length++);
		currentPtr->value= new char[length];
		for(length=0;key[length]!='\0';length++)
		{
			currentPtr->value[length]=key[length];
		}
		//currentPtr->value=key;
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
		Node<char*> *currentPtr;
		currentPtr=basePtr;
		while(currentPtr!=NULL)
		{
			cout<<currentPtr->value;
			cout<<" ";
			currentPtr=	currentPtr->nextPtr;
		}
	cout<<"NULL";
	}

};
int main()
{
	LinkedList<int> obj= LinkedList<int>();
	obj.add(12);
	obj.add(14);
	obj.add(16);
	obj.add(18);
	obj.add(20);
	obj.showAll();
	LinkedList<float> obj1= LinkedList<float>();
	obj1.add(1.2);
	obj1.add(1.4);
	obj1.add(1.6);
	obj1.add(1.8);
	obj1.add(2.0);
	obj1.showAll();
	LinkedList<int> obj2= LinkedList<int>();
	obj2.add(10);
	obj2.add(20);
	obj2.add(30);
	obj2.add(40);
	obj2.add(50);
	obj2.showAll();
	LinkedList<char*> obj3= LinkedList<char*>();
	obj3.add("Deepak");
	obj3.add("Rajat");
	obj3.showAll();

	
}


