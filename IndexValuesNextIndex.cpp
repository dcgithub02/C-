#include<iostream>
using namespace std;
int number[10];
nextIndex[10]={-1};
int main()
{
	int offset=0,index=0,value=0,offset1=0,counter=0,count=0;
	int emp[10],index1=0,baseIndex=0;
	for(offset=0;offset<10;offset++)
	{
		cout<<"enter index";
		cin>>index;
		if(baseIndex==0)baseIndex=index;
		if(offset>0)
		{
		 nextIndex[index1]=index;
		}
		if(index>=0 && index<10)
		{
			for(counter=0;counter<offset1;counter++)
			{
			  	while(temp[counter]==index)
			  	{
			  		cout<<"entered duplicate index. Please enter the unique value";
			  		cout<<endl<<"enter index";
	           	    cin>>index;
				}
			
			}
		cout<<endl<<"enter value";
		cin>>value;
		number[index]=value;
		temp[offset1]=index;
		index1=index;
        offset1++;
		}
		else
		{
			cout<<"Please enter correct value for the index";
		}
	}
	offset=baseIndex;
	while(nextIndex[offset]!=-1)
	{
		cout<<endl<<number[offset];
		offset=nextIndex[offset];
	}
	cout<<endl<<number[offset];
		
}	
	
