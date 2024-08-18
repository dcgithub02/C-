#include<iostream>
using namespace std;
int main()
{
	char **names;
	int offset,offset1=0;
	int size;
	int	count;
	int lengthList[size];
	char *ptrStart;
	char temp[20];
	cout<<"\n\tenter size : ";
	cin>>size;
	int length=0,length1,length2,counter=0;
	names= new char*[size];	
	for(offset=0;offset<size;offset++)
	{
		ptrStart= new char[20];
		cout<<"\n\tEnter name : ";
		cin>>ptrStart;
		names[offset]=ptrStart;
		fflush(stdin);
	}
	for(offset=0;offset<size;offset++)
	{
		cout<<endl<<"Name : "<<names[offset];
	}
	cout<<"\n\tSearch Name : ";
	cin>>temp;
	count=0;
	for(length=0;temp[length]!=NULL;length++);
	for(offset=0;offset<size;offset++)
	{
	 	ptrStart=names[offset];
	  	for(length1=0;ptrStart[length1]!='\0';length1++);
	  	if(length1==length)
	  	{
			length1=length1-1;
			counter=-1;
			offset1=0;
	  		while(++counter<length1/2)
	 	 	{
		  		if(ptrStart[offset1]!=temp[offset1++]||ptrStart[length1-counter]!=temp[length1-counter])break;
			}
			if(counter==length1/2)count++;
	  	}
	}
	if(count!=0)
	{
		cout<<"\n\tName has appeared "<<count<<" times";
	}
	else
	{
		cout<<"Name not found...";
	}
}
