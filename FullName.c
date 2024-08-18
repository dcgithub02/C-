#include<stdio.h>

void addStrings(char *firstName,char *lastName)
{
	int offset,offset1;
 	char fullName[15];
//	for(offset1=0;lastName[offset1]!='\0';offset1++)
	//{
	
	for(offset=0;firstName!='\0';offset++)
	{
		fullName[offset]=firstName[offset];
		
	}
//	offset1=offset;
	
 //}
 printf("%s",fullName);
}
int main()
{
	char firstName[]="deepak";
	char lastName[]="chhabra";
	char fullName[20];
	addStrings(firstName,lastName);
	
}
