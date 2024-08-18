#include<stdio.h>
int marks[10],nextIndex[10];
int baseIndex=-1,previousIndex=0;
addValue(int value,int currIndex)
{
	marks[currIndex]=value;
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
int deleteNumber(int number)
{
	int offset,previousOffset;
	offset=baseIndex;
	previousOffset=baseIndex;
	while(offset!=-1)
	{
	  if(marks[offset]==number)
	  {
	  	break;
	  }
	  previousOffset=offset;
	  offset=nextIndex[offset];
	  
	}
	nextIndex[previousOffset]=nextIndex[offset];
	return offset;
	
}
showAll(int baseIndex)
{
	int currIndex;
	currIndex=baseIndex;
	while(currIndex!=-1)
	{
		printf("\n %d",marks[currIndex]);
	    currIndex=nextIndex[currIndex];
	}
}

int main()
{
	int number, indexListingStatus[10]={0};
	int currentIndex,deletedIndex=0;
	while(1)
	{
		printf("\nEnter the marks & press -1 t exit/quit ");
		scanf("%d",&number);
		if(number==-1)
		{
			break;
		}
		do
		{
			up:
			printf("Enter the value of index");
			scanf("%d",&currentIndex);
			if(currentIndex<0 || currentIndex>10)
			{
				printf("index out of bound exception");
				goto up;
			}
			indexListingStatus[currentIndex]++;
			
		}while(indexListingStatus[currentIndex]>=2);
		addValue(number,currentIndex);
	}
	showAll(baseIndex);
	printf("\nPlease enter the number to be deleted ");
	scanf("%d",&number);
	deletedIndex=deleteNumber(number);
	indexListingStatus[deletedIndex]=0;
	addValue(number,deletedIndex);
	showAll(baseIndex);
	
}
