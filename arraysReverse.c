#include<stdio.h>
void reverseArray(int arr[],int size);
int main()
{
	int arr[11]={1,2,4,3,5,6,7,8,9,10,11},index;
    reverseArray(arr,11);
    for(index=0;index<11;index++)
    {
    	printf(" %d ",arr[index]);
	}
}
void reverseArray(int arr[],int size)
{
	int count,temp,last=size;
	for(count=0;count<last/2;count++)
	 {					
	    temp=arr[count];
	    arr[count]=arr[size-1];
	    arr[size-1]=temp;
	    size--;
	} 
}
