#include<conio.h>
#include<stdio.h>

	struct FolderStructure *basePtr=NULL;
	struct FolderStructure *prevPtr=NULL;
		//int size=500;
struct FolderStructure
{
	struct FolderStructure *sibling;
	struct FolderStructure *child;
	int size;
	char * name;
	int totalSize;
};
void createDrive(char * name)
{
	char  option1;
	int choseSize=0;
	struct FolderStructure *currPtr;
	currPtr=malloc(sizeof(struct FolderStructure));
	printf("\n\t Create Drive-chose Y/N");
	scanf("%c",&option1);
	if(option1=='Y')
	{
		printf("\n\t Enter the size of the drive ");
		scanf("%d",&choseSize);
		currPtr->size=currPtr->size-choseSize;
		if(basePtr==NULL)
		{
			basePtr=currPtr;
			prevPtr=currPtr;
			currPtr->name=name;
			currPtr->sibling=NULL;
			currPtr->child=NULL;
			currPtr->size=choseSize;
			return;
		}
		if(currPtr->size!=0)
		{
			currPtr->name=name;
			currPtr->size=choseSize;
			prevPtr->sibling=currPtr;
			prevPtr=currPtr;
			basePtr=currPtr->sibling;
		}
		else
		{
			printf("\n\t Memory is full .Please delete some data ");
		}
	}
	else
	{
		return;
	}
}
display()
{
	struct FolderStructure *copyBase;
	copyBase=basePtr;
	while(copyBase!=NULL)
	{
		printf("\n\t %s",copyBase->name);
		copyBase=copyBase->sibling;
	}
}
int main()
{
	int offset=0;
	int option;
	char * driveName;
	printf("\n\t1. Create Drive\
		         \n\t2. Display Drives\
				 \n\t3. Exit ");
	while(1)
	{
		printf("\n\tSelect your option : ");
		scanf("%d",&option);
		if(option==1)
		{
			printf("\n\t Enter the Drive name ");
			scanf("%s",&driveName);
			fflush(stdin);
			createDrive(driveName);
		}
		if(option==2)
		{
			display();
		}	
		if(option==3)
		{
			break;
		}
	}
	
	
}
	
