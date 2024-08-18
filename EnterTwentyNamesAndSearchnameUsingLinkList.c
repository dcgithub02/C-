#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char *indexOfName[10];
int baseIndex=-1,previousIndex=0,nextIndex[10];

char* inputNames(char const*  text)
{
	char ch;
	int offset=0;
	char *name=calloc(30,sizeof(char));
	while((ch=fgetc(stdin))!='\n')
	{
		name[offset++]=ch;
		
	}
	name[offset]='\0';
	return name;
}

void insertName(char *enterName,int index)
{
	indexOfName[index]=enterName;
	nextIndex[index]=-1;
	if(baseIndex==-1)
	{
		previousIndex=index;
		baseIndex=index;
		return;
	}
	nextIndex[previousIndex]=index;
	previousIndex=index;
}
void showAll(int baseIndex)
{
	int copyBase;
	int offset=0;
	copyBase=baseIndex;
	while(copyBase!=-1)
	{
		printf("%s",indexOfName[copyBase]);
		copyBase=nextIndex[copyBase];
	}
}

int main()
{
 	int indexListingStatus[10]={0};
 	int index=0,flag=1;
 	char *names;
 	char const * text="Select 1 to enter -1 to exit";
 	while(flag==1)
 	{
 		names=inputNames(text);
 		do
 		{
 			up:
 			printf("Enter index ");
 			scanf("%d",&index);
 			if(index<0 || index>30)
 			{
 				printf("Please select valid index ");
 				goto up;
			 }
			 indexListingStatus[index]++;
		 }while(indexListingStatus[index]>=2);
 		
 		insertName(names,index);
		printf("\nContinue [1-yes 0-No] : ");
		scanf("%d",&flag);
		fflush(stdin);
	 }
	showAll(baseIndex);
}
