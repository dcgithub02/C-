//obj3=obj1(25)+ obj2(65)
#include<iostream>
using namespace std;
class Integer
{
	private:
	int number;
  public:
  Integer operator() (int num)
  {
  	 this->number=num;
  	 return *this;
  }
  Integer operator+ (Integer obj)
  {   Integer obj3;
  	 obj3.number=this->number+obj.number;
  	 return obj3;
  }
friend ostream& operator<<(ostream &out,Integer &obj);
friend istream& operator>>(istream &input,Integer &obj);
		
};
ostream& operator<<(ostream &out,Integer &obj)
{
	out<<obj.number;
	return out;
}
istream& operator>>(istream &input,Integer &obj)
{
	input>>obj.number;
	return input;
}
int main()
{
	Integer obj1,obj2,obj3;
	//int num;
	int number;
	cout<<"enter the number : ";
	cin>>obj1;
	cout<<"enter the number : ";
	cin>>obj2;
	obj3=obj1+obj2;
	cout<<obj3;
	     
}

