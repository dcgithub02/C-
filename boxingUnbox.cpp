#include<iostream>
using namespace std;
class Integer
{
	private:
	int num;
	public:
	Integer(int number=0)
	{
		this->num=number;
	}
	int& get() //unboxing method
	{
		return(this->num);
	}
	Integer set(int number)//boxing
	{
		this->num=number;
		return(*this);
	}
};
int main()
{
	Integer obj,obj1;
	int sum=0;
	
	for(obj.set(0);obj.get()<5;obj.get()++)
	{
		sum=obj.get()+sum;
	}
	cout<<"sum : "<<sum;
	for(obj.set(0);obj.get()<5;obj.get()++)
	{
		obj1.get()=obj1.get()+5;
	}
	cout<<"obj :  "<<obj1.get();
}

