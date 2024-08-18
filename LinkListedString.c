 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char *indexOfName[10];
int baseIndex=-1,previousIndex=0,nextIndex[10];
char* input(char const *textMess)
{
	char ch;
	int offset=0;
	printf(textMess);
	char *name=calloc(30,sizeof(char));
	while((ch=fgetc(stdin))!='\n')
	{
		name[offset++]=ch;
	}
	name[offset]='\0';
	return name;
}
void insertName(char *enterName,int currIndex)
{    
    indexOfName[currIndex]=enterName;
    nextIndex[currIndex]=-1;
	if(baseIndex==-1)
	{	
	 baseIndex=currIndex;
	 previousIndex=currIndex;
	 return;
	}
	nextIndex[previousIndex]=currIndex;	
	previousIndex=currIndex;
}
void showAll(int baseIndex)
{
	int currIndex;

	currIndex=baseIndex;
	while(currIndex!=-1)
	{
		printf("%s->",indexOfName[currIndex]);
		currIndex=nextIndex[currIndex];
	}
	printf("NULL");
}
int main()
{
	int index=0,flag=1,prompt,indexListingStatus[10]={0};
	char *name;
	while(flag==1)
	{
		name = input("\nEnter name : ");
		do
		{
			up:printf("\nEnter the index  ");
			scanf("%d",&index);
			if(index<0 || index>30)
			{
				printf("\nInvalid Index,Try again...");
				goto up;
			}
			indexListingStatus[index]++;
		}while(indexListingStatus[index]>=2);
		insertName(name,index);
		printf("\nContinue [1-yes 0-No] : ");
		scanf("%d",&flag);
		fflush(stdin);
	}    
	printf("\n\tList : ");
	showAll(baseIndex);
}
