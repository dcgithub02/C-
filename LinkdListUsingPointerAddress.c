#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct LinkdList;
struct LinkdList *basePtr;
struct LinkdList *prevPtr;
struct LinkdList
{
	int key;
	struct LinkdList *nextPtr;
};
	void addValues(int value)
	{
		struct LinkdList *currPtr;
		currPtr=malloc(sizeof(struct LinkdList));
		currPtr->key=value;
		currPtr->nextPtr=NULL;
		if(basePtr==NULL)
		{
			basePtr=currPtr;
			prevPtr=currPtr;
			return;
		}
	
			prevPtr->nextPtr=currPtr;
			prevPtr=currPtr;
	}
	void showAll()
	{
		struct LinkdList *baseCopy=basePtr;
		while(baseCopy!=NULL)
		{
			printf("\n %d",baseCopy->key);
			baseCopy=baseCopy->nextPtr;
		}
	}
	void deleteNumber(int key)
	{
		struct LinkdList *copyBase;
		struct LinkdList *copyPrev;
		copyBase=basePtr;
		
		while(copyBase!=NULL)
		{
			if(copyBase->key==key)
			{
				break;
			}
			copyPrev=copyBase;
			copyBase=copyBase->nextPtr;
		}
		if(copyBase==basePtr)
		{
			basePtr=basePtr->nextPtr;
		}
		else if(copyBase!=NULL)
		{
		
		copyPrev->nextPtr=copyBase->nextPtr;
		}
		else if(copyBase==NULL)
		{
			printf("unable to find...");
		}
		else if(copyBase==prevPtr)
		{
			prevPtr=copyPrev;
			prevPtr->nextPtr=NULL;
		}
		
	}
int main()
{
	int key;
	int option=1;
	while(option==1)
	{
	printf("enter key ");
	scanf("%d",&key);
	addValues(key);
	printf("press 1 to continue or press 0 to exit");
	scanf("%d",&option);
	}
showAll();
deleteNumber(12);
showAll();
}
