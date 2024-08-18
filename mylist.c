

#include<stdio.h>
int marks[20];
int nextIndex[20];
int baseIndex=-1;
int previousIndex;
void addValue(int number,int currIndex)
{
	marks[currIndex]=number;
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
void showList(int baseIndex)
{
	int currIndex;
	currIndex=baseIndex;
	while(currIndex!=-1)
	{
		printf("%d->",marks[currIndex]);
		currIndex=nextIndex[currIndex];
	}	
	printf("NULL");
}
int main()
{
	int currIndex,number;
	int indexStatus[21]={0};//associative array
	while(1)
	{
		printf("\n\tEnter number[press -1 to quit] : ");
		scanf("%d",&number);
		if(number==-1)break;
		do
		{
			up:
			printf("\n\tEnter index : ");
			scanf("%d",&currIndex);
			if(currIndex<0||currIndex>21)
			{
				printf("\n\tIndex out of range...");
				goto up;
			}
			indexStatus[currIndex]++;
		}
		while(indexStatus[currIndex]>=2);
		addValue(number,currIndex);
	}
	printf("\n\tlist : ");
	showList(baseIndex);
	
}
