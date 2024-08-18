#include<iostream>
class Second;
class Third;
class First
{
	public:
	int number;
	void setData(int number);
	int getData();
	First operator+(Second obj1);
	First operator+(Third obj1);
	Third First operator+(Third obj1);
	
	void displayData();
};
class Second
{
	public:
	int number;
	void setData(int number);
	int getData();
	Second	operator+(Third obj1);
	Second	operator+(First obj1);
	void displayData();
};
class Third
{
	public:
	int number;
	void setData(int number);
	int getData();
	Third operator+(First obj1);
	Third operator+(Second obj1);
	void displayData();
};
    void First::setData(int number)
	{
		this->number=number;
	}
    int  First::getData()
	{
		return this->number;
	}
    First First::operator+(Second obj1)
	{
		First obj;
		obj.number=this->number+obj1.getData();
		return obj;
	}
	First First::operator+(Third obj1)
	{
		First obj;
		obj.number=this->number+obj1.getData();
		return obj;
	}
	Third First::operator+(Third obj1)
	{
		Third obj;
		obj.getData()=this->number+obj1.getData();
		return obj;
	}
    void First::displayData()
	{
		printf("Sum of all objects %d ",this->number);
	}
	
	void Second::setData(int number)
	{
		this->number=number;
	}
    int Second::getData()
	{
		return this->number;
	}
    Second Second::operator+(Third obj1)
	{
		Second obj;
		obj.number=this->number+obj1.getData();
		return obj;
	}
	Second Second::operator+(First obj1)
	{
		Second obj;
		obj.number=this->number+obj1.getData();
		return obj;
	}
    void Second::displayData()
	{
		printf("Sum of all objects %d ",this->number);
	}
	void Third::setData(int number)
	{
		this->number=number;
	}
    int Third::getData()
	{
		return this->number;
	}
    Third Third:: operator+(First obj1)
	{
		Third obj;
		obj.number=this->number+obj1.getData();
		return obj;
	}
	

	Third Third:: operator+(Second obj1)
	{
		Third obj;
		obj.number=this->number+obj1.getData();
		return obj;
	}
	
    void Third::displayData()
	{
		printf("Sum of all objects %d ",this->number);
	}

int main ()
{
	First obj1;
	Second obj2;
	Third obj3;
	First obj4;
	Second obj5;
	Third obj6;
	obj1.setData(10);
	obj2.setData(20);
	obj3.setData(30);
	obj4=obj3+obj2+obj1;
	obj4.displayData();
 
}

