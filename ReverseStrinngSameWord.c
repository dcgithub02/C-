//hello how are you
 //you are how hello
#include<stdio.h>
#include<stdlib.h>
void reverseEachWord(char *name)
{
	char * word;
	int offset=0,length,index=0,count=0,offset1=0;
	for(length=0;name[length]!='\0';length++);
	word= calloc(length+1,sizeof(int));
	for(offset=length-1;offset>=-1;offset--)//hello how are you
	{
	    if(name[offset]==' '||offset==-1) // you
		{
			offset1=offset+1;
		     
			while(index!=0)
			{ 
			
			word[count]=name[offset1];
		    count++;
			offset1++;
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
