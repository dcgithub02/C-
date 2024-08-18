#include<iostream>
#include<deque>
using namespace std;
template<typename Type>
class Stack
{
	deque<Type> dataStack;
	Type value;
	int currentIndex;
	public:
	Stack():currentIndex(0)
	{
		
	}
	void push(Type const& value)
	{
		dataStack.push_back(value);
		currentIndex++;
	}
	Type const& pop()
	{
		if(currentIndex!=0)
		{
		
		currentIndex--;
		Type value=dataStack.at(currentIndex);
		dataStack.pop_back();
		return value;
		}
		return (-1);	
	}
	Type top()
	{
		dataStack.at(currentIndex-1);
	}
	
	void emptyStack()
	{
		dataStack.empty();
	}
	
	template<typename Type1>
	Stack& operator=(Stack<Type1> obj)
	{
		Stack temp;
		Type1 value;
		this->emptyStack();
		while((value=obj.pop())!=-1)
		{
			this->push(value);			
		}
		return *this;
	} 
};
int main()
{
	Stack<int> obj1;
	Stack<float> obj2;
	obj1.push(11);
	obj1.push(12);
	obj1.push(13);
	obj1.push(14);
	cout<<obj1.top();
	obj2=obj1;
	cout<<obj2.top();
	
}
