#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class String 
{
	int length,offset=0,length1,offset1=0,count;
	    private :
		char  *name;
		
		public :
		void operator =(char   *name1)
		{
			for(length=0;name1[length]!='\0';length++);
			this->name=new char[length+1];
			for(offset=0;name1[offset]!=0;offset++)
			{
				this->name[offset]=name1[offset];
			}
			this->name[offset]='\0';
		}
		String operator +(char * name2)
		{
			String add;
			for(length1=0;name2[length1]!='\0';length1++);
		    add.name=new char[length+length1+2];
		    for(offset1=0;this->name[offset1]!='\0';offset1++)
		    {
		     add.name[offset1]=this->name[offset1] ;
			}
		    for(count=0;name2[count]!='\0';count++)
		    {
		     add.name[offset1]=name2[count] ;
		     offset1++;
			}
			return(add);
		}
	   	operator char const * ()
		{
			 return this->name;
		}
		
};
int main()
{
	String obj;
	obj="deepak";
	obj=obj+"hello";
	cout<<obj;
	
}
