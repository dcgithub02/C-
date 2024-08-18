#include<iostream>
using namespace std;
class Integer
{
	public:
	int number;
  
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
   void display()
{
	cout<<this->number;
}
		
};

int main()
{
	Integer obj1,obj2,obj3;
	int num;
	obj3=obj1(25)+obj2(65);
	obj3.display();
	     
}

