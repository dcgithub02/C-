#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define LEFT 1
#define RIGHT 0

struct DoublyList
{
	
	int key;
	struct DoublyList *leftPtr;
	struct DoublyList *rightPtr;
};
	struct DoublyList *basePtr=NULL;
	struct DoublyList *prevPtr=NULL;

	void AddValues(int key)
	{
		struct DoublyList *currPtr;
	    currPtr=malloc(sizeof(struct DoublyList));
		currPtr->key=key;
		currPtr->leftPtr=NULL;
		currPtr->rightPtr=NULL;
		if(basePtr==NULL)
		{
			basePtr=currPtr;
			prevPtr=currPtr;
			return;
		}
		prevPtr->rightPtr=currPtr;
		currPtr->leftPtr=prevPtr;
		prevPtr=currPtr;
	}
	void insertValue(int key,int targetKey,int location)
	{
			struct DoublyList *copyBase;
			struct DoublyList *copyPrev;
			copyBase=basePtr;
			//copyPrev=prevPtr;
			struct DoublyList *currPtr;
	    
	    	if(copyBase==NULL )
				{
				
					printf("Please select Add method instead of using insert method.");
					return;
				}
		
			if(location==LEFT)
			{
				while(copyBase!=NULL)
				{
					if(copyBase->key==targetKey)
					{
						currPtr=malloc(sizeof(struct DoublyList));
						currPtr->key=key;
						copyPrev->rightPtr=currPtr;
						currPtr->leftPtr=copyBase->leftPtr;
						currPtr->rightPtr=copyBase;
						copyBase->leftPtr=currPtr;
						return;
					}
					//	copyPrev=copyBase;
						copyBase=copyBase->rightPtr;
				
				}
			}
			else if(location==RIGHT)
			{
				while(copyBase!=NULL)
				{
					if(copyBase->key==targetKey)
					{
						currPtr=malloc(sizeof(struct DoublyList));
						currPtr->key=key;
						currPtr->rightPtr=copyBase->rightPtr;
						copyBase->rightPtr=currPtr;
						currPtr->leftPtr=copyBase;
						//currPtr->rightPtr=copyBase;
						//copyBase->leftPtr=currPtr;
						return;
					}
					//	copyPrev=copyBase;
						copyBase=copyBase->rightPtr;
				
				}
			}
	}
void deleteKey(int key)
	{
		int flag=0;
				struct DoublyList *copyBase;
				struct DoublyList *copyPrev;
				copyBase=basePtr;
				copyPrev=prevPtr;
				if(copyBase==NULL)
				{
					printf("\n\t List is empty.");
				}
				if(copyBase->key==key)
				{
					
					basePtr=basePtr->rightPtr;
					basePtr->leftPtr=NULL;
					free(copyBase);
					return ;
				}
		while(copyBase!=NULL)
		{
			if(copyBase->key==key)
			{
				flag=1;
				copyPrev->rightPtr=copyBase->rightPtr;
				copyBase->rightPtr=copyPrev;
			//	basePtr=copyBase->rightPtr;
			//	basePtr->leftPtr=copyPrev;
				//basePtr->leftPtr=copyPrev;
				//basePtr=copyBase->rightPtr;
				free(copyBase);
				break;
				
			}
		
			copyPrev=copyBase;
			copyBase=copyBase->rightPtr;
			
		}
			if(flag==0)
			{
				printf("\n\t Entered key doesn't exists in the list.Please re-enter valid value.");
				printf("\n\t *******************************************************************");
			}	
	} 
	void displayAll()
	{
		struct DoublyList *baseCopy;
		baseCopy=basePtr;
		printf("\n\t Displaying all the elements present in the list: ");
		printf("\n");
		while(baseCopy!=NULL)
		{
			printf("\t %d\t",baseCopy->key);
			baseCopy=baseCopy->rightPtr;
		}
//		baseCopy=prevPtr;
//		while(baseCopy!=NULL)
//		{
//			printf("%d\t",baseCopy->key);
//			baseCopy=baseCopy->leftPtr;
//		}
	}
int main()
{
	int value,targetKey;
	int location;
	int flag=1;
	while(flag==1)
	{
		printf("\n\t Enter the key : ");
		scanf("%d",&value);
		AddValues(value);
		printf("\n\t choose 1 to continue or 0 to exit ");
		scanf("%d",&flag);
	}
	displayAll();
	printf("\n\t Enter value to delete ");
	scanf("%d",&value);
	deleteKey(value);
	displayAll();
	printf("\n\t Enter the key : ");
	scanf("%d",&value);
	printf("\n\t Enter target key ");
	scanf("%d",&targetKey);
	printf("\n\t Please select 1 to insert on left or 0 to insert on right ");
	scanf("%d",&location,location);
	insertValue(value,targetKey,location);
	displayAll();
}
