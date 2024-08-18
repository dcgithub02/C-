#include<iostream>
using namespace std;
int main()
{
	char **names;
	int offset,offset1=0,index1=0;
	int size;
	int lengthList[size];
	char *ptr;
	char temp[20];
	cout<<"\n\tenter size";
	cin>>size;
	int length=0,length1,flag=0;
	int index=0;
	names= new char*[size];	
	for(offset=0;offset<size;offset++)
	{
		ptr= new char[20];
		cout<<"\n\tEnter name : ";
		cin>>ptr;
		names[offset]=ptr;
		fflush(stdin);
	}
	for(offset=0;offset<size;offset++)
	{
		cout<<endl<<names[offset];
	}
	cout<<"\n\t enter name ";
	cin>>temp;
	fflush(stdin);
	for(length=0;temp[length];length++);
	for(offset=0;offset<size;offset++)
	{
	 	ptr=names[offset];
	  	for(length1=0;ptr[length1]!='\0';length1++);
	  	if(length1==length)
	  	{
	  		while(ptr[offset1]!='\0')
	 	 	{
		  		offset1++;
		  		if(ptr[offset1]==temp[offset1])
		  		{
		  			index++;
				}
			}
			if(index==length)
			{
				cout<<"\n\tsearched string/element is present";
				break;
			}
			else
			{
				cout<<"\n\tsearched element is not present in the list";
				break;
			}
	  	}
	}
	if(offset==size)
	{
		cout<<"\n\tsearched element is not present in the list";
	}
}
