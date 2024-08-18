#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct LinkedList;
struct LinkedList *basePtr;
struct LinkedList *previousPtr;
struct LinkedList
{
	int value;
	struct LinkedList *nextPtr;
};
 	void AddValues(int key )
	{
	    struct LinkedList *currPtr;
	    currPtr=malloc(sizeof(struct LinkedList));
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
		struct LinkedList *baseCopy=basePtr;
		while(baseCopy!=NULL)
		{
			
			printf("%d",baseCopy->value);
			baseCopy=baseCopy->nextPtr;
		}
		
	}
//
//struct LinkedList *currPtr;
//currPtr=malloc(sizeof(struct LinkedList));
//currPtr->value=48;
//currPtr->nextPtr=null;
int main()
{
	int elementValue;
	int option=1;
	while(option==1)
	{
		printf("enter value ");
		scanf("%d",&elementValue);
		AddValues(elementValue);
		printf("press continue [1] or [0] to exit");
		scanf("%d",&option);
	}
	showAll();
}
