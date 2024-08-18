void table1(int number=5,int limit=5)
{
	int result;
	if(limit==0)
	{
		return ;
	} 
	table1(number,limit-1);
	result= number*limit;
	printf("\n\t  %d  *  %d = %d ",number,limit,result);
}
void table1(int number=5,int limit=4)
{
	int result;
	if(limit==0)
	{
		return ;
	} 
	table1(number,limit-1);
	result= number*limit;
	printf("\n\t  %d  *  %d = %d ",number,limit,result);
}
void table1(int number=5,int limit=3)
{
	int result;
	if(limit==0)
	{
		return ;
	} 
	table1(number,limit-1);
	result= number*limit;
	printf("\n\t  %d  *  %d = %d ",number,limit,result);
}
void table1(int number=5,int limit=2)
{
	int result;
	if(limit==0)
	{
		return ;
	} 
	table1(number,limit-1);
	result= number*limit;
	printf("\n\t  %d  *  %d = %d ",number,limit,result);
}
void table1(int number=5,int limit=1)
{
	int result;
	if(limit==0)
	{
		return ;
	} 
	table1(number,limit-1);
	result= number*limit;
	printf("\n\t  %d  *  %d = %d ",number,limit,result);
}
void table1(int number=5,int limit=0)
{
	int result;
	if(limit==0)
	{
		return ;
	} 
	table1(number,limit-1);
	result= number*limit;
	printf("\n\t  %d  *  %d = %d ",number,limit,result);
}
