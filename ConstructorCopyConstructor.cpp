#include<iostream>
using namespace std;
class Demo
{
	int num1;
	float num2;
	public :
		Demo(int num1,int num2)
		{
			this->num1=num1;
			this->num2=num2;
		}
		Demo(Demo &refObj)
		{
			this->num1=refObj.num1;
			this->num2=refObj.num2;
		}
		void display()
		{
			cout<<"\n\t num1 :"<<this->num1;
			cout<<"\n\t num2 :"<<this->num2;
		}
};
int main()
{
	Demo obj(12,5.6f);
	Demo obj1=obj;
	obj.display();
	obj1.display();
}
