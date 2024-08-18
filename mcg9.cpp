#include<stdio.h>
int function(int num)
{
	int tmp=1,count;
	if(num==1) return tmp;
	for(count=1;count<num;++count)
	tmp=tmp+function(count)*function(num-count);
	return tmp;
}

int main()
{
	int num=3;
	int out=function(num);
	printf(" output is %d",out);
}








