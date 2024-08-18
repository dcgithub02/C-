//First half reverse 
//Samay -->masay
#include<stdio.h>
#include<stdlib.h>
void halfReverse(char *name)
{
	int offset=0,offset1=0,length=0,count=0;
	char * word;
	for(length=0;name[length]!='\0';length++);
	word= calloc(length+1,sizeof(char));
	for(offset=length/2;offset>=0;offset--)
	{
        word[offset1]=name[offset];
	    offset1++;
	}
        for(offset=length/2+1;offset<length;offset++)
    	{
    		word[offset1]=name[offset];
    		offset1++;
		}
	     printf("%s",word);	
	}

int main()
{
	char name[18]="Sanjayrana";
	halfReverse(name);
	
}
