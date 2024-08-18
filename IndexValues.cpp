#include<iostream>
using namespace std;
int main()
{
	int offset=0,index=0,value=0,offset1=0,counter=0;
	int number[10], temp[10];
	for(offset=0;offset<10;offset++)
	{
		cout<<"enter index";
		cin>>index;
		
		if(index>=0 && index<10)
		{
			for(counter=0;counter<offset1;counter++)
			{
			  	if(temp[counter]==index)
			  	{
			  		cout<<"entered duplicate index. Please enter the unique value";
			  		cout<<endl<<"enter index";
	           	    cin>>index;
				}
				else
				{
				 continue;
				}
			}
		cout<<endl<<"enter value";
		cin>>value;
		number[index]=value;
		temp[offset1]=index;
		offset1++;
		
		}
		else
		{
			cout<<"Please enter correct value for the index";
		}
	}
	
	for(offset1=0;offset1<10;offset1++)
	{
		cout<<endl<<number[offset1];
	}
	
		
}	
	
