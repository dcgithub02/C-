#include<stdio.h>
float fun(int ay[],int N)
{
	if(N==1) return ay[N-1];
	else
	return ((fun(ay,N-1)*(N-1)+(ay[N-1])/N));
	
}
int main()
{
	int array[]={1,2,3,4,5};
	int SIZE =sizeof(array)/sizeof(array[0]);
	printf("%.2f\n",fun(array,SIZE));
	return 0;
}
