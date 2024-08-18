#include<iostream>
using namespace std;
template <typename Type>
class Vector
{
	private:
	Type *numbers;
	int SIZE,index;
	public:
	Vector()
	{
		this->SIZE=10;
		this->numbers= new Type[this->SIZE];
		this->index=0;
	}
	Vector(int size)
	{
		this->SIZE=size;
		this->numbers= new Type[this->SIZE];
		this->index=0;
	}
	void setValues(Type value)
	{
		if(this->index>=0 && this->index<this->SIZE)
		{
			this->numbers[index]=value;
			this->index++;
		}
		else
		{
			Type * temp;
			int offset;
			temp= new Type[2*this->SIZE];
			for(offset=0;offset<this->SIZE;offset++)
			{
				temp[offset]=this->numbers[offset];
				
			}
			temp[offset]=value;
			delete(this->numbers);
			this->numbers=temp;
			this->SIZE=this->SIZE*2;
			this->index=this->index+1;
		}
		
	}
	void getValues(int position)
		{
			if(position>0 && position<this->index)
			{
				cout<<endl<<this->numbers[position];
			}
		}
};
int main()
{
    Vector<int> vc;
    Vector<float> vc1;
	vc.setValues(10);
	vc.setValues(20);
	vc1.setValues(1.5);
	vc1.setValues(2.5);
	vc.setValues(30);
	vc.getValues(2);
	vc1.getValues(1);
	
}
