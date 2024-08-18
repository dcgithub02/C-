#include<iostream>
#include<deque>
using namespace std;
template<typename Type>
class Stack
{
	deque<Type> dataStack;
	int currentIndex;
	public:
		Stack():currentIndex(0)
		{
			
		}
		void push(Type const & number)
		{
			dataStack.push_back(number);
			currentIndex++;
		}
		Type pop()
		{
			if(currentIndex!=0)
			{
				currentIndex--;
				Type value=dataStack.at(currentIndex);
			}
		}
}

