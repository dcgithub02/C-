#include<iostream>
using namespace std;
class FetchMarks
{
	public:
	int * marks;
	int index;
	
};
FetchMarks getMarks(int marks[],int size,int marksLimit)
{
	FetchMarks temp;
	int offset,index=0;
	for(offset=0;offset<size;offset++)
	{
		if(marks[offset]<=marksLimit)
		{
			index++;
		 } 
	}
	temp.index=index;
	temp.marks= new int[index];
	index=0;
	for(offset=0;offset<size;offset++)
	{
		if(marks[offset]<=marksLimit)
		{
			temp.marks[index]=marks[offset];
		index++;
			
		}
		
	}
	return temp;
	
}
int main()
{
	FetchMarks obj;
	int size=10,offset,marksLimit=20;
	int mark[size];
	for(offset=0;offset<size;offset++)
	{
		cout<<"enter numbers ";
		cin>>mark[offset];
	}
	obj=getMarks(mark,size,marksLimit);
	cout<<obj.index;
for(offset=0;offset<obj.index;offset++)
{
	cout<<endl<<obj.marks[offset];
}
	
}
