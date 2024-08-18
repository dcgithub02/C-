#include<iostream>
#include<deque>
#define EMPTY -1
using namespace std;
template<typename Type>
class Node
{
	public:
	Type value;
	Node<Type> *nextPtr;
	
};
template<typename Type1>
class Stack
{
	private:
	Node<Type1> *topOfStackPtr;
	public:
	Stack()
	{
		topOfStackPtr=NULL;
	}
	void push(Type1 key)
	{		
		Node<Type1> *currentPtr;
		currentPtr= new Node<Type1>;
		currentPtr->value=key;
		currentPtr->nextPtr=topOfStackPtr;
		topOfStackPtr=currentPtr;
	}
	void showAll()
	{
		Node<Type1> *topOfStack;
		topOfStack=topOfStackPtr;
		while(topOfStack!=NULL)
		{
			cout<<"\n";
			cout<<topOfStack->value;
			topOfStack=	topOfStack->nextPtr;
		}
	cout<<"\nNULL";
	}
	Type1 pop()
	{
		Node<Type1> *temp;
		if(topOfStackPtr!=NULL)
		{
			temp=topOfStackPtr;
			Type1 value=topOfStackPtr->value;
			topOfStackPtr=topOfStackPtr->nextPtr;
			delete(temp);
			return value; 
		}
		else
		{
		//	cout<<"Stack if empty";
			return NULL;
		}
		
	}
	bool empty()
	{
		while(this->topOfStackPtr!=NULL)
		{
			Node<Type1> *temp;
			temp=this->topOfStackPtr;
			this->topOfStackPtr=this->topOfStackPtr->nextPtr;
			delete(temp);
		}
		//cout<<"Stack is now empty";
		return 1;
	}
	template<typename Type>
    Stack& operator=(Stack<Type> temp)
    {
		Type value;
    	this->empty();
        while((value=temp.pop())!=NULL)
        {
        	this->push(value);
        //this->topOfStackPtr=>nextPtr;
    	}
		return *this;	
    }
  
	Type1 top()
	{
		return topOfStackPtr->value;
	}
};
int main()
{
    Stack<int> obj1;
    Stack<float> obj2;
    int value;
    obj1.push(12);
    obj1.push(13);
    obj1.push(14);
    obj1.push(15);
    obj1.push(16);
    cout<<"Printing stack values : ";
    obj1.showAll();
   // obj1=obj2;
 	obj2=obj1;
   cout<<"Printing stack2 values : ";
   obj2.showAll();
 
    cout<<"Top is "<<obj1.top();
    obj1.showAll();
    obj1.pop();
    cout<<"\nAfter pop";
    obj1.showAll();
    obj1.empty();
    obj1.showAll();
    // cout<<"\n\top : "<<obj2.top();
   // obj2.printAll();
}
