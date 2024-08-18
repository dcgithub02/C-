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
int searchKey(int number)
{
	int offset=baseIndex;
	while(1)
	{
		if(numbers[offset]==number)
		{
			return offset;
		}
		offset=nextIndex[offset];
	}
	
}
int deleteIndex(int number)//1
{
	int keyOfNumber=0,offset1=baseIndex;
	keyOfNumber=searchKey(number);
	printf("%d",keyOfNumber);
	while(1)
	{
		if(nextIndex[offset1]==keyOfNumber)
		{
			break;
		}
	   offset1=nextIndex[offset1];
	}
//	printf("%d",keyOfNumber);
    nextIndex[offset1]=nextIndex[keyOfNumber];
    return keyOfNumber;
  
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
	int number,index,listOfIndexes[10]={0}, indexValue;
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
printf("enter the value of number");
scanf("%d",&number);
indexValue=deleteIndex(number);
showAll(baseIndex);
listOfIndexes[indexValue]=0;
addValues(66,indexValue);
showAll(baseIndex);
addValues(77,indexValue);
//	printf("enter the index to be deleted ");
//	scanf("%d",&index);
//	deleteIndex(index)
}
