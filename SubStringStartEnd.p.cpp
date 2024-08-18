#include<stdio.h>
   char * subString(char  * name,int start,int end)
	{    
	    
		int offset,offset1=0,length;
		for(length=start;length<=end;length++);
		char * filteredValue= calloc(length+1,sizeof(int));
		
		for(offset=start;offset<=end;offset++,offset1++)
		{
			filteredValue[offset1]=name[offset];
		}
			filteredValue[offset1]='\0';
		    printf("%s",filteredValue);
		    return filteredValue[offset1];
	}
int main()
{  
     char const * newName;
     char name[30]="kris Gethin body by design";
	newName=subString(name,5,10);
	printf("%s",newName);
}
