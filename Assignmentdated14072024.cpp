#include<iostream>
using namespace std;
class Fourth
{	
	public:
		void setData(int temp);
		void setData(float temp);
		virtual	void showData();
};
class Integer:public Fourth
{
	int number;
	public:
	void setData(int number)
	{
		this->number=number;
	}
	void showData()
	{
		cout<<this->number;
	}
};
class Float:public Fourth
{
	float number;
	public:
	void setData(float number)
	{
		this->number=number;
	}
	void showData()
	{
		cout<<this->number;
	}
};
class Char:public Fourth
{
	char *name;
	public:
	void setData(char *name)
	{
		this->name=name;
	}
	void showData()
	{
		cout<<this->name;
	}
};
void showAll(Fourth object)
{
	   object.showData();
};
int main()
{
	int value1;
	float value2;
	Integer obj1;
	obj1.setData(1);
	Float obj2;
	obj2.setData(1.2);
	showAll(obj1);
	cout<<"\n";
	showAll(obj2);
	//cout<<obj1.showData();
	
	//cout<<obj2.showData();
	
}
