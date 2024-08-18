main()
{
	int num=1;
	int out =function(num);
printf("output is %d ", out)	;
}
int function(int num)
{
	static int sNum=1;
	if(num>=5)
	return num;
	num=num+sNum;
	sNum++;
	return function(num);
}

