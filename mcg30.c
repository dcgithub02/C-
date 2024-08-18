#include<stdio.h>
void fun(char input[],char output[], int index)
{
	int length;
	for(length=0;input[length]!='\0';length++);
	output=output+input[index];
	if(index==length-1) return;
	if(input[index]==input[index+1])
	output=output+'*';
	fun(input,output,index+1);
	
}


int main()
{
	char input[]="geeks";
	char output[]="";
	int index=0;
	fun(input,output,index);
	printf("%s",output);
}


