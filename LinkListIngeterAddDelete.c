#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct LinkedList1 ;
struct LinkedList1 * basePtr;
struct LinkedList1 *prevPtr;
struct LinkedList1 * basecopy;
struct LinkedList1
{
	int key;
	struct LinkedList1 *nextPtr;
};
	void addNumbers(int value)
	{
		struct LinkedList1 *currentPtr;
		currentPtr=malloc(sizeof(struct LinkedList1));
		currentPtr->key=value;
		currentPtr->nextPtr=NULL;
		if(basePtr==NULL)
		{
		basePtr=currentPtr;
		prevPtr=currentPtr;
		return;
		}
		prevPtr->nextPtr=currentPtr;
		prevPtr=currentPtr;
		
	}
	int deleteNumber(int number)
	{
		struct LinkedList1 *prevAddr;
		struct LinkedList1 *baseAddr;
		baseAddr=basePtr;
		if(baseAddr->key==number)
		{
			basePtr=baseAddr->nextPtr;
			free(baseAddr);
			return 1;
		}
		while(baseAddr!=NULL)
		{
			if(baseAddr->key==number)
			{
				prevAddr->nextPtr=baseAddr->nextPtr;
				free(baseAddr);
				return 1;
			}
			prevAddr=baseAddr;
			baseAddr=baseAddr->nextPtr;
		}
		return 0;
		}
	void compareValues()
	{
		int temp;
		basecopy=basePtr;
			//printf("%d",prevPtr->key);
			//printf("%d",basePtr->key);
		if(prevPtr->key<basePtr->key)
		{
			temp=prevPtr->key;
			prevPtr->key=basePtr->key;
			basePtr->key=temp;
		}
		basePtr=basePtr->nextPtr;
	}
 void showAll()
 {
 	struct LinkedList1 *baseCopy;
 	baseCopy=basePtr;
 	while(baseCopy!=NULL)
 	{
 		printf("\n%d",baseCopy->key);
 		baseCopy=baseCopy->nextPtr;
	 }
 }
 int main()
 {
 	int key,flag=0,option;
 	while(1)
 	{
 		printf("\n\t Enter option 1: To add Key\
		        \n\t Enter Option 2:To show List\
				\n\t Enter Option 3: To Delete Key\
				\n\t Enter Option 4 : To Exit :\t ");
		scanf("%d",&option);
 		if(option==1)
 		{
		printf("enter value of key ");
 		scanf("%d",&key);
 		if(flag>0)
 		{
 		compareValues();
		 }
 		flag=1;
 		addNumbers(key);
 		}
 		if(option==2)
 		{
 		showAll();
		}
		if(option==3)
		{
		printf("enter key to delete ");
 		scanf("%d",&key);
		deleteNumber(key);
		}
		if(option==4)
		{
		  break;	
		}
	}
 }

