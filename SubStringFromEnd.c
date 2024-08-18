#include<stdio.h>
   void subString(char * name,int start,int end)
	{    
	    
		int offset,offset1=0,length;
		for(length=start;length<=end;length++);
		char * filteredValue= calloc(length,sizeof(int));
		
		for(offset=start;offset<=end;offset++,offset1++)
		{
			filteredValue[offset1]=name[offset];
		}
		printf("%s",filteredValue);
	}
int main()
{  
     char name[30]="kris Gethin body by design";
	subString(name,5,10);
}
