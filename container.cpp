#include<iostream>
using namespace std;
class Container
{
	int id;
	char* name;
	//int age;
	public:
	Container(int id,char* name)
	{
		this->id=id;
		this->name=name;
	}
	
	 int getID()
	{
		return this->id;
	}
	char* getName()
	{
		return this->name;
	}
};
class Demo : public Container
{
	int id;
	char* name;
	public:
	Demo(int id,char* name)
	{
		this->id=id;
		this->name=name;
	}
	int getID()
	{
		return this->id;
	}
	char* getName()
	{
		return this->name;
	}
};
int main()
{
	new Demo(1,"Deepak");
	new Demo(2,"rohan";)
}
