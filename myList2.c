#include<stdio.h>
int numbers[10],nextIndex[10];
int baseIndex=-1,previousIndex=0;
void addValues(int value ,int currentIndex )
{
	numbers[currentIndex]=value;
	nextIndex[currentIndex]=-1;
	if(baseIndex==-1)
	{
		baseIndex=currentIndex;
		previousIndex=currentIndex;
		return;
	}
	
	nextIndex[previousIndex]=currentIndex;
	previousIndex=currentIndex;
}
showAll(int baseIndex )
{
	int currIndex;
	currIndex=baseIndex;
	while(currIndex!=-1)
	{
		printf("\n%d",numbers[currIndex]);
		currIndex=nextIndex[currIndex];
	}
}
int main()
{
	int number,index,listOfIndexes[10]={0};
	while(1)
	{
	    printf("enter numbers and enter -1 to quit");
	     scanf("%d",&number);
	     if(number==-1)break;
	 do
	 {
	 	 
	 	up:
	 	printf("enter index ");
	 	scanf("%d",&index);
	 	if(index<0 || index>9 )
	 	{
	 		printf("index out of bound exception");
	 		goto up;
	 		
		 }
		 else
		 {
		 	listOfIndexes[index]++;
		 }
		 
	 }while(listOfIndexes[index]>=2);
	 addValues(number,index);
	 
	}
	showAll(baseIndex);
}
