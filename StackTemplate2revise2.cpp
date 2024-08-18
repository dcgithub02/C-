#include<iostream>
#include<deque>
using namespace std;
template<typename Type>
class Stack
{
	deque<Type> dataStack;
	int currentIndex;
	public:
	Stack():currentIndex(-1)
	{
		
	}
	void push(Type value)
	{
		currentIndex++;
		dataStack.push_back(value);
	}
	Type pop()
	{
		if(currentIndex!=-1)
		{
			Type value;
		 	value=	dataStack.at(currentIndex);
		 	dataStack.pop_back();
			currentIndex--;
		 	return value;
		}
		return -1;
	}
	Type top()
	{
		return(dataStack.at(currentIndex));
	}
	void emptyStack()
	{
		dataStack.empty();
	}
	template<typename Type1>
	Stack& operator=(Stack<Type1> temp)
	{
		Type1 value;
		while((value=temp.pop())!=-1)
		{
			this->push(value);
		}
		return *this;
	}
};
int main ()
{
	Stack<int> obj1;
	Stack<float> obj2;
	obj1.push(11);
	obj1.push(12);
	obj1.push(13);
	obj1.push(14);
	cout<<"\none : "<<obj1.pop();
	cout<<"\ntwo : "<<obj1.top();
	obj2=obj1;
	cout<<"\nthree : "<<obj2.top();
}
