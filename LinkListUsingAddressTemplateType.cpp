#include<iostream>
using namespace std;
class LinkedList;
class LinkedList *basePtr;
class LinkedList *previousPtr;
template<typename Type>
class LinkedList
{
	private:
	Type value;
	class LinkedList *nextPtr;
	public:
	void AddValues(Type key )
	{
	    class LinkedList *currPtr;
	    currPtr=new  LinkedList();
		currPtr->value=key;
		currPtr->nextPtr=NULL;
		if(basePtr==NULL)
		{
			basePtr=currPtr;
			previousPtr=currPtr;
			return;
		}
		previousPtr->nextPtr=currPtr;
		previousPtr=currPtr;
	}
	void showAll()
	{
		class LinkedList *baseCopy=basePtr;
		while(baseCopy!=NULL)
		{
			
			printf("%d",baseCopy->value);
			baseCopy=baseCopy->nextPtr;
		}
		
	}
};
//
//struct LinkedList *currPtr;
//currPtr=malloc(sizeof(struct LinkedList));
//currPtr->value=48;
//currPtr->nextPtr=null;
int main()
{
	LinkedList<int>obj;
	int elementValue;
	int option=1;
	while(option==1)
	{
		printf("enter value ");
		scanf("%d",&elementValue);
		obj.AddValues(elementValue);
		printf("press continue [1] or [0] to exit");
		scanf("%d",&option);
	}
	obj.showAll();
}
