#include<stdio.h>
int numbers[10],nextIndex[10];
int baseIndex=-1,previousIndex=0;
void addValues(int currentIndex,int value)
{
	numbers[currentIndex]=value;
	nextIndex[currentIndex]=-1;
	if(baseIndex==-1)
	{
		baseIndex=currentIndex;
		nextIndex[currentIndex]=currentIndex;
		return;
	}
	
	nextIndex[currentIndex]=currentIndex;
	previousIndex=currentIndex;
}
showAll(int baseIndex )
{
	
}
