#include<stdio.h>
int function(int ary[],int num)
{
	int out;
	if(num==1)
	{
		return ary[0];
		
	}
	else out= function(ary,num-1);
	if(out>ary[num-1]) return out;
	else return ary[num-1];
}
int main()
{
	int arr[]={12,10,30,50,100};
	printf("%d",function(arr,5));
	getchar();
	return 0;
}
