#include<stdio.h>
#include<conio.h>
int callMe(char * name)
{
//	printf("%s",name);
	if(name[0]=='\0') return 0;
  int sum=name[0]+37*callMe(name+1);
  	//printf("%d",sum);
  	return sum;
}
int main()
{
	int sum=0;
	char * name="ABC";
	sum=callMe(name);
	printf("%d",sum);
	
}
