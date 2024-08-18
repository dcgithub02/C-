#include<iostream>
using namespace std;
class Demo
{
	int num1;
	float num2;
	public:
		Demo()
		{
			num1=0;
			num2=0.0f;
			
		}
		Demo(int num1,float num2)
		{
			this->num1=num1;
			this->num2=num2;
			
		}
		void display()
		{
			cout<<"num1 :"<<this->num1;
			cout<<"num2 :"<<this->num2;


		}
		
};
int main()	
{
	Demo obj= Demo();//explicit
	Demo obj1= Demo(12,3.4f);
	obj.display();
	obj1.display();
	}	


