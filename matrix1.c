#include<stdio.h>
int main()
{
	int offset=0,offset1=0,index=0;
	int  matrix[3][3];
for(offset=0;offset<3;offset++)
{
	
	for(offset1=0;offset1<3;offset1++)
	{
		printf("Enter data for the %d *%d matrix",offset,offset1 );
		scanf("%d",&matrix[offset][offset1]);
	
	}
	
}

for(offset1=0;offset1<3;offset1++)
{
	
	printf("\n");
	for(offset=0;offset<3;offset++)
	{
		printf("%d",matrix[offset][offset1]);
	}
    }
}
