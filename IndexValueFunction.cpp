#include<iostream>
using namespace std;
int number[10],indexAll[10]={-1},baseIndex=-1,previousIndex=0;
void setData(int value,int index)
{
	number[index]=value;
	if(baseIndex==-1)
	{
		baseIndex=index;
		previousIndex=index;
		
	}
}
int main()
{
	int index,value,offset=0,counter,temp[10],offset1=0,firstIndex;
	for(offset=0;offset<10;offset++)
	{
		cout<<"enter index ";
		cin>>index;
		firstIndex=index;
		if(index>=0 && index<10)
		{
	        for(counter=0;counter<offset1;counter++)
			{
			  	while(indexAll[counter]==index)
			  	{
			  		cout<<"entered duplicate index. Please enter the unique value";
			  		cout<<endl<<"enter index";
	           	    cin>>index;
				}
			}
		cout<<"enter value ";
		cin>>value;
		number[index]=value;
		indexAll[offset1]=index;
		offset1++;
		
		}
		else
		{
			cout<<"Please Enter valid index ";
		}
	}
	//displayValues(number,firstIndex);
}	
	
