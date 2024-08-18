//hello how are you
 //olleh woh era uoy
#include<stdio.h>
#include<stdlib.h>
void reverseEachWord(char *name)
{
	char * word;
	int offset=0,length,index=0,count=0,offset1=0;
	for(length=0;name[length]!='\0';length++);
	word= calloc(length+1,sizeof(char));
	for(offset=0;offset<length;offset++)//hello how are you
	{
	    if(name[offset]==' '||offset==-1) // you
		{
			offset1=offset-1;
		     
			while(index!=0)
			{ 
			
			word[count]=name[offset1];
		    count++;
			offset1--;
			index--;
			}
			word[count]=' ';
			count++;
     	}
		 
		else 
		{
			index++;//3
	    }
	}
	printf("%s",word);   
}
int main()
{
	char name[30]="Hello how are you";
	reverseEachWord(name);
}
