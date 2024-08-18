#include<stdio.h>
   char * subString(char const* name,int start)
	{    
	    
		int offset,offset1=0,length;
		for(length=start;name[length]!='\0';length++);
		char * filteredValue= calloc(length+1,sizeof(int));
		
		for(offset=start;name[offset]!='\0';offset++,offset1++)
		{
			filteredValue[offset1]=name[offset];
		}
		filteredValue[offset]='\0';
		return filteredValue;
	//	printf("%s",filteredValue);
	}
int main()
{  
     char name[30]="kris Gethin body by design";
     char const *newName;
	 newName=subString(name,5);
	 printf("%s",newName);
}
