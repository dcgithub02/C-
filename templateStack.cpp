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
        else
        {
            cout<<"\n\tstack is empty...";
            return(-1);
        }
    }
    Type const& top() const
    {
        return(dataStack.at(currentIndex-1));
    }
    bool emptyStack()const
    {
        return(dataStack.empty());
    }
};
int main()
{
    Stack<int> obj;
    obj.push(12);
    obj.push(13);
    obj.push(14);
    obj.push(15);
    obj.push(16);
    cout<<"\n\t"<<obj.top();
    cout<<"\n\t"<<obj.top();
	cout<<"\n\t"<<obj.pop();
    cout<<"\n\t"<<obj.pop();
    cout<<"\n\t"<<obj.pop();
    cout<<"\n\t"<<obj.pop();
    cout<<"\n\t"<<obj.pop();
    cout<<"\n\t"<<obj.pop();
    cout<<"\n\tempty : "<<obj.emptyStack();
}
