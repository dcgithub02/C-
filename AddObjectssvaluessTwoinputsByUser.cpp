//obj3=obj1(5,9) + obj2(7,5)
#include<iostream>
using namespace std;
class Integer
{
	public:
	int number,number1;
  
//  Integer operator() (int num,int num1)
//  {
//  	 this->number=num;
//  	 this->number1=num1;
//  	 return *this;
//  }
  Integer operator+ (Integer obj)
  {   Integer obj3;
  	 obj3.number=this->number+obj.number;
  	  obj3.number1=this->number1+obj.number1;
  	 return obj3;
  }
//   void display()
//{
//	cout<<endl<<this->number;
//	cout<<endl<<this->number1;
//}
friend istream& operator>>(istream &input,Integer &obj);
	friend ostream& operator<<(ostream &out,Integer &obj);	
};

istream& operator>>(istream &input,Integer &obj)
{
    cout<<"enter value of number1 :";
	input>>obj.number;
	cout<<"enter value of number2 :";
	input>>obj.number1;
	return input;
}
ostream& operator<<(ostream &out,Integer &obj)
{
	out<<obj.number;
	out<<endl<<obj.number1;
}
int main()
{
	Integer obj1;
	Integer obj2;
	Integer obj3;
	cin>>obj1;
	cin>>obj2;
	obj3=obj1+obj2;
	cout<<endl<<obj3;
	//cout<<endl<<obj3;
	
	     
}

