#include<conio.h>
#include<stdio.h>
class Base
{
	public:
	void display()
	{
		printf("\n\tbase class method called");
	}
};
class Child : public Base
{
	public:
	void display()
	{
		printf("\n\tchild  class method called ");
	}
};
int main()
{
		Base *ptr;
		Child obj;
		ptr= new Child();
		ptr->display();
		obj.display();
		//childPtr->display();		
}
