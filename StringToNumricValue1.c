//when you want to convert string into numeric value=unique value 
#include<stdio.h>
#include<conio.h>
int callMe(char * name)
{
	int sum;
	if(name[0]=='\0') return 0;
    sum=name[0]+37*callMe(name+1);
  	return sum;
}
int main()
{
	//A=65, AB=2407,ABC=94230 output 
	int sum=0;
	char * name="hello";
	sum=callMe(name);
	printf("%d",sum);
	
}
