#include<stdio.h>

int function(int array[],int SIZE)
{
  if(SIZE<=0) return 0;
  return(function(array,SIZE-1)+array[SIZE-1]);
}
int main()
{

 int array[]={1,2,3,4,5};
 int SIZE=sizeof(array)/sizeof(array[0]);
 printf("%d",function(array,SIZE));
 return 0;
}
