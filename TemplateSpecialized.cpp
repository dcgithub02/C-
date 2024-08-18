#include<iostream>
using namespace std;
template<typename Type>
int equals(Type  num1, Type  num2)
{
	cout<<"\n\t template call";
	return((num1==num2)?1:0);
}
template<>
int equals(char const name1[],char const name2[])
{
	int length,diff=0;
	cout<<"\n\t function call";
	for(length=0;name1[length]!='\0';length++);
	diff=length-diff;
	for(length=0;name2[length]!='\0';length++);
	diff=length-diff;
	if(diff!=0)return 0;
	for(length=0;name1[length]!='\0';length++)
	{
		if(name1[length]!=name2[length]) return 0;
	}
	cout<<"\n\t function call";
		return(1);
		
	}
	int main()
	{
		int out ;
		out=equals(12,34);
		cout<<out;
		out=equals("hello","hello");
		cout<<out;
	}
