#include<stdio.h>
void function(int arr[],int count,int sum)
{
	if(count<0)
	{
		printf("\n\t %d",sum);
		return;
	}
    if(arr[count]%2==0)sum+=arr[count];
    function(arr,count-1,sum);
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int count= sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	function(arr,count-1,sum);
}
