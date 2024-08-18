#include<iostream>
using namespace std;
template<typename Type1,typename Type2=int>
class MyClass
{
	Type1 number1;
	Type2 number2;
	public:
		void setData(Type1 num1,Type2 num2)
		{
			this->number1=num1;
			this->number2=num2;
		}
		Type1 getFirst()
		{
			return this->number1;
		}
		Type2 getSecond()
		{
			return this->number2;
		}
};
int main()
{
	
	MyClass<float> obj;
	MyClass<int,float>obj1;
	obj.setData(12.5,10);
	obj.getFirst();
	obj.getSecond();
	cout<<"\n"<<obj.getFirst();
	cout<<"\n"<<obj.getSecond();
	obj1.setData(12.3,14.5);
	cout<<"\n"<<obj1.getFirst();
	cout<<"\n"<<obj1.getSecond();
}
