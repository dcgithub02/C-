#include<iostream>
class AddMultipleObjects
{
	int number;
	public:
	void setData(int number)
	{
		this->number=number;
	}
	AddMultipleObjects operator+(AddMultipleObjects obj1)
	{
		AddMultipleObjects obj;
		obj.number=this->number+obj1.number;
		return obj;
	}
	void displayData()
	{
		printf("Sum of all objects %d ",this->number);
	}
};
int main ()
{
	AddMultipleObjects obj1,obj2,obj3,obj4,obj5,obj6;
	obj1.setData(10);
	obj2.setData(20);
	obj3.setData(30);
	obj4.setData(40);
	obj5.setData(50);
	obj6=obj1+obj2+obj3+obj4+obj5;
//	obj6=obj1.operator+(obj2).operator+(obj3).operator+(obj4).operator+(obj5);
//	obj6=operator+(operator+(operator+(operator+(obj1,obj2),obj3),obj4),obj5);
	obj6.displayData();
 
}

