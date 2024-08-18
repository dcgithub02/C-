#include<stdio.h>
#include<conio.h>
void printMe(char * name)
{
//	printf("%s",name);
	if(name[0]=='\0') return ;
    printf("%c",name[0]);
  	printMe(name+1);
}
int main()
{
	
	char * name="ABC";
	printMe(name);
//	printf("%d",sum);
	
}
