#include<iostream>
using namespace std;
template<typename Type1,typename Type2=int>
class Template1
{
	Type1 number1;
	Type2 number2;
	public:
	void setData(Type1 number1,Type2 number2)
	{
		this->number1=number1;
		this->number2=number2;	
	}	
	Type1 getFirst()
	{
		cout<<"\n"<<this->number1;
		return this->number1;
	}
	Type2 getSecond()
	{
		cout<<"\n"<<this->number2;
		return this->number2;
	}
};
int main()
{
	Template1<float> obj;
	obj.setData(1,2);
	obj.getFirst();
	obj.getSecond();
	Template1<int,float> obj1;
	obj1.setData(2,3.3);
	obj1.getFirst();
	obj1.getSecond();
	
}

