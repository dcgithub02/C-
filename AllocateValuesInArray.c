#include<stdio.h>
#include<conio.h>
int main()
{
	char * obj;
	int index,offset=0,value=46;
	obj= calloc(5,sizeof(int));
	for(offset=0;offset<5;offset++)
	{
		
		if(offset==1)
		{
			obj[offset]=value+2;
		}
		else
		{
			obj[offset]=++value;
			//value++;
			
		}
		
	}
	for(offset=0;offset<5;offset++)
	{
		printf("\n obj[%d] = %d",offset,obj[offset]);
	}
	
}
