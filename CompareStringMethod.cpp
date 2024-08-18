#include<stdio.h>
#include<stdlib.h>
char * toLowerCase(char *name)
{
	    int offset;
	   
	    int lengthOfName;
	    for(lengthOfName=0;name[lengthOfName]!='\0';lengthOfName++);
	    char *temp= new char[lengthOfName+1];
		for(offset=0;name[offset]='\0';offset++)
		{
			temp[offset]=(name[offset]>64 && name[offset]<98)?name[offset]+32:name[offset];
		}
        temp[offset]='\0';
        return temp;
}
int equals(char *name,char *name2)
{
	int lengthOfName,lengthOfName2;
	int offset,flag;
	for(lengthOfName=0;name[lengthOfName]!='\0';lengthOfName++);
	for(lengthOfName2=0;name2[lengthOfName2]!='\0';lengthOfName2++);
	name=toLowerCase(name);
	name2=toLowerCase(name2);
	if(lengthOfName==lengthOfName2)
	{
		for(offset=0;name[offset]!='\0';offset++)
		{
		
			if(name[offset]=!name2[offset])
			{
			  return 0;
		    }
			else
			{
				
			}
	}
	return 1;
}
	else
	{
		return 0;
	}
}
int main()
{ 
    int flag;
    char name[]="deepak";
    char name1[]="deepak";
   
flag=equals(name,name1);
printf("%d",flag);

	
}
