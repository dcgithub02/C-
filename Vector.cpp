#include<iostream>
using namespace std;
class Vector
//delete(this->numbers)
{
	private:
	int size;
	int index;
	int *numbers;
	public:
	Vector()
	{
	  this->size=10;
	  this->numbers= new int[this->size];
	  this->index=0;
	  	
	}
	Vector(int size)
	{
		this->size=size;
		this->numbers= new int[this->size];
		this->index=0;
	}
	void add(int value)
	{
		int offset,*temp;
		if(this->index < this->size)
		{
			numbers[this->index]=value;
			this->index++;
		}
		else 
		{
		   temp= new int[2*this->size];
		   for(offset=0;offset<this->size;offset++)
		   {
		   	 	temp[offset]=this->numbers[offset];
		   }
		   delete(this->numbers);
		   this->numbers=temp;
		   this->size=this->size*2;
		   this->index=this->index+1;
		}
	}
	int getValue(int position)
	{
		if(position<this->index&&position>=0)
		{
			return(this->numbers[position]);	
		}	
		cout<<"\n\tindex out of bounds...";
		system("pause");
		exit(0);
	}
};
int main()
{
	int offset;
	Vector vc;
    vc.add(1);
	vc.add(2);
	vc.add(3);
    vc.add(4);
    vc.add(5);
    cout<<"\n\tvalue : "<<vc.getValue(3);
}
