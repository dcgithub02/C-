#include<iostream>
class AddMultipleObjects
{
	int number;
	public:
	void setData(int number)
	{
		this->number=number;
	}
	AddMultipleObjects addObjects(AddMultipleObjects obj1)
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
	obj6=obj1.addObjects(obj2).addObjects(obj3).addObjects(obj4).addObjects(obj5);
  //temp=	obj1.addObjects(obj2);
  //temp= temp.addObjects(obj3);
 // temp=temp.addObjects(obj4);
  //obj6=temp.addObjects(obj5);
  obj6.displayData();
 
}

