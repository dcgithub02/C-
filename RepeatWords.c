// this is my book -check how many times "is" coming
#include<stdio.h>
#include<stdlib.h>
int CheckRepeatWord(char * word,char *key)
{
	int counter=0,counter1=0;
 	int offset=0,count=0,offset1=0,length=0,length1=0;
 	for(length=0;key[length]!='\0';length++);
 	for(length1=0;word[length1]!='\0';length1++);
 	//printf("  %d   ",length);
    while(word[offset]!='\0')
    {
        offset1=0;
        count=0;
    
        while(key[offset1]!='\0')
        {
           	if(word[offset]==key[offset1])
           	{   
			    count++;
     		    if(count==length)
     		  	{
     		  		counter++;
     		  		offset++;
     	            offset1++;
     		  		break;
				}
				offset++;
     			offset1++;
     		}  	
			else
			{
			 	offset++;
			 	offset1=0;
			 	
			}
		}
printf("  %d",counter1);
 	}	
 	 	return counter; 	 
}
int main()
{   int count;
	char name[33]="hello how the hello is lost love";
	char key[3]="lo";
    count=CheckRepeatWord(name,key);
    printf("%d",count);
}
