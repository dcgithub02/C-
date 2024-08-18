#include<iostream>
using namespace std;
template<typename Type>
class Stack
{
	deque<Type> dataStack;
	int currentIndex;
	
	Stack:currentIndex(0)
	{
		
	}
	void push(Type value)
	{
		dataStack.push_back(value);
		currentIndex++;
		
	}
	Type pop(int currentIndex)
	{
		currentIndex--;
		if(currentIndex!=0)
		{
		
		Type value=dataStack.at(currentIndex);
		dataStack.pop_back();
		return value;
		}	
		return -1;
		
	}
	Type top()
	{
		return dataStack
	}
}
