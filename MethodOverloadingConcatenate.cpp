#include<stdio.h>
#include<stdlib.h>
#include<iostream>
// obj=obj+5;
//obj=bj+3.8;
using namespace std;
class String 
{
	public :
	int offset,length,offset1=0;
	private:
	char * obj;
	
	public:
	void operator=(char * name)
	{
		for(length=0;name[length]!='\0';length++);
		this->obj= new char[length+1];
		for(offset=0;name[offset]!='\0';offset++)
		{
			this->obj[offset]=name[offset];
		}
	}
	public:
	String operator+(int num)
	 {    	
	        char * number;
		    String add;
		    int count=0;
            int num1=num;
     	    int rem;
         	int offset=0;
	while(num1>0)
	{
		num1=num1/10;
		count++;
	}
	offset=count-1;
		
	number=new char[count+1];
		while(num>0)
		{
		    rem=num%10;
		    
			number[offset]=rem+48;
			num=num/10;
			offset--;
		}
		   number[count]='\0';
        //	printf("\n %s",number);
        for(length=0;this->obj[length]!='\0';length++);
		add.obj=new char[length+count+2];
		for(offset=0;this->obj[offset]!='\0';offset++)
		{
			add.obj[offset1]=this->obj[offset];
			offset1++;
		}
		for(offset=0;this->obj[offset]!='\0';offset++)
		{
			add.obj[offset1]=number[offset];
			offset1++;
		}
        
        return add;
}	;
		
		
operator char const * ()
		{
			 return this->obj;
		}
		
};
int main()
{
	String obj;
	obj="hello";
	obj=obj+5;
	cout<<obj;
	
}
