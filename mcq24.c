int fun(int arr[],int begin,int end)
{
	if(begin>=end) return 1;
	
	if(arr[begin]==arr[end]) return fun(arr,begin+1,end-1);
	else return 0;
}
int main()
{
	int array[]={3,6,0,6,3};
	int SIZE=sizeof(array)/sizeof(array[0]);
	if(fun(array,0,SIZE-1)==1) printf("Palindrome");
	else
	printf("Not Palindrome");
	return 0;
}
