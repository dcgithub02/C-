#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct LinkedList2
{
  int key;	
  struct LinkedList2 *nextPtr;
};
struct LinkedList2 * basePtr=NULL;
void addNode(int value)
{
		struct LinkedList2 *currentPtr;
		currentPtr=malloc(sizeof(struct LinkedList2));
		currentPtr->key=value;
	    currentPtr->nextPtr=basePtr;
	    basePtr=currentPtr;
}
	void showAll()
 {
 	struct LinkedList2 *baseCopy;
 	baseCopy=basePtr;
 	while(baseCopy!=NULL)
 	{
 		printf("\n%d",baseCopy->key);
 		baseCopy=baseCopy->nextPtr;
	 }
 }
 void deleteNode(int value)
 {
 	struct LinkedList2 *nextCopy;
 	struct LinkedList2 *baseCopied;
 	baseCopied=basePtr;
 	nextCopy=basePtr;
 	if(baseCopied->key==value)
 	{
 		basePtr=baseCopied->nextPtr;
 		free(baseCopied);
 		return;
 		
	 }
 	while(baseCopied!=NULL)
 	{
 		if(baseCopied->key==value)
 		{
			 nextCopy->nextPtr=baseCopied->nextPtr;
			 free(baseCopied);
 			break;
 		}
 		else
 		{
 			nextCopy=baseCopied;
		 	baseCopied=baseCopied->nextPtr;
 	
		}
 } 	
}
void insertNode(int targetValue,int insertValue)
{
	int preference;
	struct LinkedList2 *temp;
	struct LinkedList2 *baseCopy;
	struct LinkedList2 *next;
	baseCopy=basePtr;
	while(baseCopy!=NULL)
	{
		if(baseCopy->key==targetValue)
		{
		printf("Enter the preference where value to be inserted-1.Left side 2.Right side ");
		scanf("%d",&preference);
		
		if(preference==1)
		{
			temp=malloc(sizeof(struct LinkedList2));
			temp->nextPtr=baseCopy;
			temp->key=insertValue;
			next->nextPtr=temp;
		}
		else if(preference==2)
		{
			temp=malloc(sizeof(struct LinkedList2));
			
			temp->key=insertValue;
			temp->nextPtr=baseCopy->nextPtr;
			baseCopy->nextPtr=temp;
		}
		else
		{
			printf("Enter valid preference");
		}
	}
		next=baseCopy;
		baseCopy=baseCopy->nextPtr;
		
	}
}
void sortDataAsc()
{
	int temp;
	struct LinkedList2 *baseElement;
	struct LinkedList2 *nextElement;
	baseElement=basePtr;
	nextElement=basePtr->nextPtr;
	while(baseElement!=NULL)
	{
		if(baseElement->key>nextElement->key)
		{
			temp=baseElement->key;
			baseElement->key=nextElement->key;
			nextElement->key=temp;
		}
		printf("\n pr %d",baseElement->key);
	//	printf("\n%d",nextElement->key);
		baseElement=nextElement;
		nextElement=baseElement->nextPtr;
	
	}
}
 int main()
 {
 	int key,flag=0,option,insertValue;
 	while(1)
 	{
 		printf("\n\tMenu options are :\
		        \n\t1.Add Key\
		        \n\t2.Show List\
		        \n\t3.Delete key\
				\n\t4.Insert Value\
				\n\t5.SortData\
				\n\t6.exit ");
				printf("\n\tyour selected option is : ");
		scanf("%d",&option);
 		if(option==1)
 		{
		printf("\n\tEnter value of key ");
 		scanf("%d",&key);
 		addNode(key);
 		}
 		else if(option==2)
 		{
 		showAll();
		}
		else if(option==3)
		{
			printf("\n\tEnter number to be deleted ");
			scanf("%d",&key);
			deleteNode(key);
		}
		else if(option==4)
		{
			printf("\n\tEnter value to be searched ");
			scanf("%d",&key);
			printf("\n\tEnter value to be entered ");
			scanf("%d",&insertValue);
			insertNode(key,insertValue);
		}
		else if(option==5)
		{
			sortDataAsc();
		}
		else if(option==6)
		{
		  break;	
		}
		else
		{
			printf("Invalid selection. Please select option again ");
		}
	}
 }
