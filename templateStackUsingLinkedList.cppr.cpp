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
	Type1 value;
	Node<Type1> *topOfStackPtr;
	Node<Type1> *firstPtr;
	public:
	Stack()
	{
		topOfStackPtr=NULL;
		firstPtr=NULL;
	}
	void push(Type1 key)
	{		
		Node<Type1> *currentPtr;
		currentPtr= new Node<Type1>;
		currentPtr->value=key;
		cout<<currentPtr->value;
		currentPtr->nextPtr=NULL;
		if(topOfStackPtr==NULL)
		{
			firstPtr=currentPtr;
		}
		topOfStackPtr->nextPtr=currentPtr;
		topOfStackPtr=currentPtr;
	}
	void showAll()
	{
		Node<Type1> *topOfStack;
		topOfStack=topOfStackPtr;
		while(topOfStack->nextPtr=firstPtr)
		{
			cout<<topOfStack->value;
			cout<<" \n";
			topOfStack=	topOfStack->nextPtr;
		}
	cout<<"NULL";
	}
	Type1 pop(Type1 value)
	{
		Node<Type1> *currentPtr;
		currentPtr=topOfStackPtr;

		if(topOfStackPtr!=NULL)
		{
			topOfStackPtr->nextPtr=currentPtr;
			
		}
	}
};
//template<typename Type,int SIZE>
//class Stack
//{
//    LinkedList<Type,SIZE> list;
//    int currentIndex;
//    public:
//    Stack():currentIndex(0)
//    {
//    	
//    	
//    }
//    void push(Type const& number)
//    {
//    	if(this->currentIndex<SIZE)
//    	{
//    		this->push(list.add(number));
//        	this->currentIndex++;
//		}
//		else
//		{
//			cout<<"Stack is full";
//		}
//		
//    }
//    Type pop()
//    {
//       if(currentIndex!=0)
//        {
//        	currentIndex--;
//            Type value =list.get();
//           
//            return(value);
//        }
//        return(EMPTY);
//    }
//    Type const& top() const
//    {
//        return(list[currentIndex-1]);
//    }
//    bool emptyStack()
//    {
//    	this->currentIndex=0;
//        return 1;
//    }
//    
//    template<typename Type1>
//    Stack& operator=(Stack<Type1,5> temp)
//    {
//        Type1 value;
//        
//        this->emptyStack();
//        currentIndex=SIZE-1;
//        while((value=temp.pop())!=EMPTY)
//        {	this->list[currentIndex]=value;
//            currentIndex--;
//        }
//        currentIndex=SIZE;
//    	return *this;
//    }
//    void printAll()
//    {
////    	for(int index=SIZE-1;index>=0;index--)
////    	{
////    		cout<<"\n"<<this->arr[index];
////		}
//		list.showAll();
//	}
//};
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
    obj1.showAll();
   // obj2=obj1;
   // cout<<"Printing stack values : ";
   // cout<<"\n\top : "<<obj2.top();
   // obj2.printAll();
}
