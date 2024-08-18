// this is my book -check how many times "is" coming
#include<stdio.h>
#include<stdlib.h>
int CheckRepeatWord(char * word,char *key)
{
 	int counter=0,offset=0,count=0,offset1=0,length=0;
 	for(length=0;key[length]!='\0';length++);
		while(word[offset1]!='\0')
		{
			if(key[offset]!='\0')
			{
				if(key[offset]==word[offset1])
				{
					count++;
				   	offset++;
				    offset1++;
				   if(count==length)
				   {
					counter++;
			     	count=0;
			     	offset=0;
				   }
				}     
			    else
			    { 
				 offset1++;
			}
		}
		else
		{
			offset1++;
			offset=0;
			count=0;
		}	 
	}
	return counter;
}
int main()
{   int count;
	char name[38]="hello olo how the hello is lolost ve";
	char key[6]="lo";
    count=CheckRepeatWord(name,key);
    printf("%d",count);
}
