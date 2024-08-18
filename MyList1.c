#include<stdio.h>
int numbers[10],nextInd[10];
int baseIndex=-1,previousIndex=0;
void addValues(int number,int currentIndex)
{
	numbers[currentIndex]=number;
	nextInd[currentIndex]=-1;
	if(baseIndex==-1)
	{
		baseIndex=currentIndex;
		previousIndex=currentIndex;
		return;
	}
	nextInd[previousIndex]=currentIndex;
	previousIndex=currentIndex;
	
}
void showAll(int baseIndex)
{
	int currentIndex;
	currentIndex=baseIndex;
	while(currentIndex!=-1)
	{
	 printf("%d",numbers[currentIndex]);
	 currentIndex= nextInd[currentIndex];
	}
}
int main()
{
	int num,currIndex;
	int listOfIndexes[11]={0};
	
	while(1)
	{	
		printf("enter number and enter -1 to quit ");
		scanf("%d",&num);
		if(num==-1)break;
	do
	{
		up:
	     printf("enter current index ");
	     scanf("%d",&currIndex);
		if(currIndex<0||currIndex>10)
		{
			printf("range out of bound exception");
			goto up;
		}
		else
		{
			listOfIndexes[currIndex]++;
			
		}
	}
	while(listOfIndexes[currIndex]>=2);
	addValues(num,currIndex);	
}
showAll(baseIndex);
}
