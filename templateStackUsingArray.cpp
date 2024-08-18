#include<iostream>
#include<deque>
#define EMPTY -1
using namespace std;
template<typename Type,int SIZE>
class Stack
{
    Type * arr;
    int currentIndex;
    public:
    Stack():currentIndex(0)
    {
    	arr= new Type[SIZE];
    	
    }
    void push(Type const& number)
    {
    	if(this->currentIndex<SIZE)
    	{
    		arr[this->currentIndex]=number;
        	this->currentIndex++;
		}
		else
		{
			cout<<"Stack is full";
		}
		
    }
    Type pop()
    {
       if(currentIndex!=0)
        {
        	currentIndex--;
            Type value =arr[currentIndex];
           
            return(value);
        }
        return(EMPTY);
    }
    Type const& top() const
    {
        return(arr[currentIndex-1]);
    }
    bool emptyStack()
    {
    	this->currentIndex=0;
        return 1;
    }
    
    template<typename Type1>
    Stack& operator=(Stack<Type1,5> temp)
    {
        Type1 value;
        this->emptyStack();
        while((value=temp.pop())!=EMPTY)
        {
			this->arr[currentIndex]=value;
            currentIndex++;
        }
        return *this;
    }
    void printAll()
    {
    	for(int index=SIZE-1;index>=0;index--)
    	{
    		cout<<"\n"<<this->arr[index];
		}
	}
};
int main()
{
    Stack<int,5> obj1;
    Stack<float,5> obj2;
    obj1.push(12);
    obj1.push(13);
    obj1.push(14);
    obj1.push(15);
    obj1.push(16);
    cout<<"Printing stack values : ";
    obj1.printAll();
    obj2=obj1;
    cout<<"Printing stack values : ";
    cout<<"\n\top : "<<obj2.top();
    obj2.printAll();
}
