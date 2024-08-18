unsigned int func(unsigned int n1,unsigned int n2)
{
	if(n1>0)
	return(n1%n2 + func(n1/n2,n2));
	else return 0;
}
int main()
{
	func(457,10);

}
