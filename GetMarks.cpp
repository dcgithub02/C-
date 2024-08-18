#include<iostream>
using namespace std;
class GetMarks
{
   private :int numbers[10];
   public:
void enterMarks()
{
	int offset,flag=0,temp;
	for(offset=0;offset<10;offset++)
	{
		if(flag==0)
		{
		cout<<"enter numbers";
		cin>>this->numbers[offset];
		flag=1;
		}
		else{
			
			cout<<"enter numbers";
		    cin>>this->numbers[offset];
			if(this->numbers[offset]<this->numbers[offset-1])
			{
				temp=this->numbers[offset+1];
				this->numbers[offset+1]=this->numbers[offset];
			    this->numbers[offset]=temp;
			}
		}
	
		
	}
	
	
}
void getMarks()
{
	int offset;
	for(offset=0;offset<5;offset++)
	{
		cout<<endl<<this->numbers[offset];
	}
	
}
};
int main()
{
	GetMarks marks;
	marks.enterMarks();
	marks.getMarks();
	
}
