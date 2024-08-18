#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct  LinkListNum *basePtr=NULL;
struct LinkListNum *prevPtr;
struct LinkListNum 
{
	struct LinkListNum *nextPtr;
	int key;
	
};
void addValues(int key)
{
	struct LinkListNum *currPtr;
	currPtr= malloc(sizeof(struct LinkListNum));
	currPtr->key=key;
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
void showAllAsc(struct LinkListNum *currPtr)
{
	if(currPtr==NULL) return;
	printf("%d->",currPtr->key);
	showAllAsc(currPtr->nextPtr);	
}
void showAllDesc(struct  LinkListNum *basePtr)
{
	if(basePtr==NULL) return;
	showAllDesc(basePtr->nextPtr);
	printf("%d->",basePtr->key);	
}
void showAll()
{
	struct LinkListNum * baseCopy;
	baseCopy=basePtr;
	printf("List of all the values entered are : ");
	while(baseCopy!=NULL)
	{
		printf("\n %d",baseCopy->key);
		baseCopy=baseCopy->nextPtr;
		
	}
}
int main()
{
	int key,option=1;
	while(1)
	{
		printf("\n\tEnter option: 1 to add values\
		\n\tEnter option: 2 to list values\
		\n\tEnter option: 0 to exit");
		printf("\n\tYour Option : ");
		scanf("%d",&option);
		if(option==0)
		{
			break;
		}
		if(option==1)
		{
			printf("\n\tEnter key : ");
			scanf("%d",&key);
			addValues(key);
		}	
		if(option==2)
		{
			printf("\n\tlow to high  : ");
			showAllAsc(basePtr);
			printf("\n\thigh to low  : ");
			showAllDesc(basePtr);
		}
	}
}
