#include<stdio.h>
int reversearrays(int arr[],int size);
int main()
{
	int arr[10]={1,2,3,5,4,6,7,9,10,8};
	int size =10,index;
	reversearrays(arr,size);
	for(index=0;index<size;index++)
	{
		printf(" %d ",arr[index]);
	}
	
}

int reversearrays(int *arr,int size)
{
	int temp,count=0;
	if(size==0) return ;
	if(size==1) return arr[0];
	temp=arr[count];
    arr[count]=arr[size-1];
    arr[size-1]=temp;
   if(count!=5) return reversearrays(arr[count+1],size-1);
    

}
