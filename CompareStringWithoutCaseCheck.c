#include<stdio.h>
int equals(char *name,char *name2)
{
	int lengthOfName,lengthOfName2;
	int offset,check=0;
	for(lengthOfName=0;name[lengthOfName]!='\0';lengthOfName++);
	for(lengthOfName2=0;name2[lengthOfName2]!='\0';lengthOfName2++);
	if(lengthOfName==lengthOfName2)
	{
		for(offset=0;name[offset]!='\0';offset++)
		{
		
			if(name[offset]!=name2[offset])
			{
			  return 0;
		    }
			else
			{
				check++;
			}
	}
	if(check==lengthOfName)
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
