#include<iostream>
using namespace std;
class SearchMarks{
	public:
	int *mark;
	int index;
};

SearchMarks  getMarks(int marks[],int size,int marksLimit )
     { 
		SearchMarks temp;
		int offset,index=0;
		for(offset=0;offset<size;offset++)
	    {
		if(marks[offset]<=marksLimit)
		{
		  index++;	
		}
		temp.index=index;
	    }
		temp.mark= new int[index];
		index=0;
		for(offset=0;offset<size;offset++)
		{
	  	 if(marks[offset]<=marksLimit)
		 {
		  temp.mark[index]=marks[offset];
		  index++;
		 }
		}
	return temp;
  
}
int main()
{
	SearchMarks obj;
	int offset;
	int size=10,marksLimit=20;
	int marks[size];
    for(offset=0;offset<size;offset++)
    {
 	  cout<<"Enter number : ";
 	  cin>>marks[offset];
    }
    
  obj= getMarks(marks,size,marksLimit);
  
  for(offset=0;offset<obj.index;offset++)
  {
  	cout<<obj.mark[offset];
  }
    
	
}
