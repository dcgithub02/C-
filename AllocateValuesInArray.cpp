#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//obj[0]=47
class AllocateValues 
{
	private:
	char * obj;
	public:
	void operator=(int value)
	{
		int offset,length;
		for(length=0;obj[length]!='\0';length++);
		this->obj= new char[length+1];
		for(offset=0;obj[offset]!='\0';offset++)
		{
			this->obj[offset]=value;
		}
		this->obj[offset]='\0';
		offset++;
	}

	operator char  * ()
		{
			 return this->obj;
		}
		
		
};
int main()
{
	String obj;
	value=47;
	
	cout<<obj;
}
