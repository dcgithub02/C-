#include<stdio.h>
int main()
{
	char firstName[]="deepak";
	char lastName[]="chhabra";
	int lengthOfFirst,lengthOfLast;
	int offset,offset1,finalLength;
    char  *fullName;
	for(lengthOfFirst=0;firstName[lengthOfFirst]!='\0';lengthOfFirst++);
	for(lengthOfLast=0;lastName[lengthOfLast]!='\0';lengthOfLast++); 
	finalLength=lengthOfFirst+lengthOfLast;
   	fullName = calloc(finalLength+1,sizeof(int));
   	for(offset=0;firstName[offset]!='\0';offset++)
   	{
   		fullName[offset]=firstName[offset];
	}
	fullName[offset]=' ';
	for(offset1=0;lastName[offset1]!='\0';offset1++)
    {
	   	fullName[++offset]=lastName[offset1];
    }
    fullName[offset+1]='\0';
	printf("Full Name : %s",fullName);
}
