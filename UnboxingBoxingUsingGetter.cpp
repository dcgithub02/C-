#include<iostream>
using namespace std;
class unboxing
{
	private:
	int num;
	public:
	unboxing(int num)
	{
		this->num=num;
		
	}
	void set(int num)
	{
		this->num=num;
	}
	int &get()
	{
		return this->num;
	}
	
	unboxing operator=(int num)
	{
		this->num=num;
		return *this;
	}
	
};
int main()
{
//	int sum;
	unboxing obj(0),obj1(0);
	for(obj.set(0);obj.get()<5;obj.get()++)
	{
		obj1.get()=obj1.get()+5;
	}
	cout<<obj1.get();
}
