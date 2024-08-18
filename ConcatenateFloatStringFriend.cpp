#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//obj=obj+3.8;
class String 
{
	private:
	char * obj;
	public:
	void operator=(char * name)
	{
		int offset,length;
		for(length=0;name[length]!='\0';length++);
		this->obj= new char[length+1];
		for(offset=0;name[offset]!='\0';offset++)
		{
			this->obj[offset]=name[offset];
		}
		this->obj[offset]='\0';
		offset++;
	}
	
	operator char  * ()
		{
			 return this->obj;
		}
		friend String operator+(float num,String obj);
		
};
	String operator+(float num,String obj)
	 {    	
	        char * number;
		    String add;
            int firstPart=0,firstPart1,countOfFirst=0,countOfSecond=0,index=0,
            offset=0,offset1=0;
            int totalLength=0,final=0,length=0,secondPart1,secondPart2;
		    float secondPart;
         	firstPart=num;//3
         	firstPart1=firstPart;//3
            secondPart=num-firstPart;//3.5-3=.5000000
            //cout<<secondPart;
            secondPart=secondPart*1000000;
            secondPart2=secondPart;
     	   while(firstPart1>0)
     	   {
     	   	 firstPart1=firstPart1/10;
     	   	 countOfFirst++;
		   }
		   
		    while(secondPart1>0)
     	   {
     	   	 secondPart1=secondPart1/10;
     	   	 countOfSecond++;
		   }
         totalLength=countOfFirst+countOfSecond-1;
         final=totalLength+1;
         number=new char[totalLength+2];
        while(secondPart2>0)//500000
		{
		    number[totalLength]=secondPart2%10+48;
			secondPart2=secondPart2/10;
			totalLength--;
		}
			number[totalLength]=46;
		    totalLength--;
		while(firstPart>0)//3
		{
		    number[totalLength]=firstPart%10+48;//51
			firstPart=firstPart/10;
			totalLength--;
		}	
		number[final]='\0';
	
        for(length=0;obj[length]!='\0';length++);
		add.obj=new char[length+final+2];
		for(index=0;number[index]!='\0';index++)
		{
			add.obj[offset1]=number[index];
			offset1++;
		}
        for(offset=0;obj[offset]!='\0';offset++)
		{
			add.obj[offset1]=obj[offset];
			offset1++;
		}
		
        return add;
}	
int main()
{
	String obj;
	obj="hello";
	obj=3.5+obj;
	cout<<obj;
}
