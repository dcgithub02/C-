#include<iostream>
using namespace std;
class Integer
{
	public:
	int count;
	public:	
void setData(int count)
{
	this->count=count;
}
Integer operator ++()
{
	++count;
	return *this;
}
Integer operator --()
{
	--count;
	return *this;
}
Integer operator ++(int )
{
	Integer temp;
	temp.count=count;
	this->count++;
	return temp;
}
Integer operator --(int )
{
	Integer temp;
	temp.count=count;
	this->count--;
	return temp;
}	
	friend ostream& operator<<(ostream &output,Integer &obj); 
};
ostream& operator<<(ostream &output,Integer &obj)
{
	output<<obj.count;
	return output;
}
int main()
{
Integer object,object1,obj2,obj3;
object.setData(1);
object=	++object;
cout<<object;
object1.setData(3);
object1=object1++;
cout<<endl<<object1;
obj2.setData(3);
obj2=--obj2;
cout<<endl<<obj2;
obj3.setData(4);
obj3=obj3--;
cout<<endl<<obj3;
}

