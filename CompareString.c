#include<stdio.h>
int main()
{
	char name[]="graceful";
	char name2[]="Graceful";
	int lengthOfName,lengthOfName2;
	int offset,flag;
	for(lengthOfName=0;name[lengthOfName]!='\0';lengthOfName++);
	for(lengthOfName2=0;name2[lengthOfName2]!='\0';lengthOfName2++);
	if(lengthOfName==lengthOfName2),
	{
		for(offset=0;offset<=lengthOfName;offset++)
		{
			if(name[offset]==name2[offset])
			{
			flag=1;
		    }
			else
			{
				printf("\n\t Entered strings are not equal");
				flag=0;
				break;
			}
		}

        if(flag==1)
		{
			printf("\n\t Entered strings are equal: i.e. 1st string is %s and 2nd string is %s ", name,name2);
		}		
	}
	else
	{
		printf("Entered Strings are not equal");
	}
	
}
