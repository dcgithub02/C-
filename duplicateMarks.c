#include<stdio.h>
int main()
{
	int marksRange[16]={0};
	int marksOfStudent[11];
	int offset;
	for(offset=0;offset<11;offset++)
	{
		printf("Enter numbers");
		scanf("%d",&marksOfStudent[offset]);
	}
	for(offset=0;offset<16;offset++)
	{
	    if(++marksRange[marksOfStudent[offset]]==2)
		{
			printf("\n\trepeated marks : %d",marksOfStudent[offset]);	
			break;
		}
	}
	
}
