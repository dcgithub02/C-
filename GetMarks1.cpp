#include<iostream>
using namespace std;
void getMarks()
{
	int numbers[10];
	int offset,flag=0,temp;
	for(offset=0;offset<10;offset++)
	{
		if(flag==0)
		{
		cout<<"enter numbers";
		cin>>numbers[offset];
		flag=1;
		}
		else
		{
			cout<<"enter numbers";
		    cin>>numbers[offset];
			if(numbers[offset]<numbers[offset-1])
			{
				temp=numbers[offset-1];
				numbers[offset-1]=numbers[offset];
			    numbers[offset]=temp;
			}
			else
			{
				numbers[offset-1]=numbers[offset-1];
				numbers[offset]=numbers[offset];
				
			}
		}
	
		
	}
	for(offset=0;offset<5;offset++)
	{
		cout<<endl<<numbers[offset];
	}
}

int main()
{
 getMarks();
	
}
