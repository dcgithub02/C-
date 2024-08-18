#include<stdio.h>
   void subString(char * name,int start)
	{    
	    
		int offset,offset1=0,length;
		for(length=start;name[length]!='\0';length++);
		char * filteredValue= calloc(length,sizeof(int));
		
		for(offset=start;name[offset]!='\0';offset++,offset1++)
		{
			filteredValue[offset1]=name[offset];
		}
		printf("%s",filteredValue);
	}
int main()
{  
     char name[30]="kris Gethin body by design";
	 subString(name,5);
}
