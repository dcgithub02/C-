#include<iostream>
#include<deque>
#define EMPTY -1
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
    void push(Type const& number)
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
            dataStack.pop_back();
            return(value);
        }
        return(EMPTY);
    }
    Type const& top() const
    {
        return(dataStack.at(currentIndex-1));
    }
    bool emptyStack()const
    {
        return(dataStack.empty());
    }
    template<typename Type1>
    Stack& operator=(Stack<Type1> temp)
    {
        //Stack<Type1> obj(temp);
        Type1 value;
        this->emptyStack();
        while((value=temp.pop())!=EMPTY)
        {
            this->push(value);
        }
        return(*this);
    }
    void printAll()
    {
    	int index=this->currentIndex-1;
    	while(index!=-1)
    	{
    		
    		cout<<"\n"<<dataStack.at(index);
    		index--;
		}
	}
};
int main()
{
    Stack<int> obj1;
    Stack<float> obj2;
    obj1.push(12);
    obj1.push(13);
    obj1.push(14);
    obj1.push(15);
    obj1.push(16);
    cout<<"Printing stack values : ";
    obj1.printAll();
    cout<<"\n\tTOP : "<<obj1.top();
    obj2=obj1;
    //cout<<"\n\tPOP : "<<obj2.pop();
    //cout<<"\n\tPOP : "<<obj2.pop();
    //cout<<"\n\tPOP : "<<obj2.pop();
    obj2.printAll();
}
