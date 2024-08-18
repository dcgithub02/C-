// Integer obj1,obj2,obj3;
//obj3=obj1(25)+ obj2(65)
#include<iostream>
using namespace std;
class ObjectsAdd
{
	int num;
	public ObjectsAdd(int num)
	{
		this.num=num;
	}
	public void display()
	{
		cout<<this->num;
	}

};
 
int main()
{
	
	ObjectsAdd obj1;
	ObjectsAdd obj2;
	ObjectsAdd obj3;
	obj3=obj2(25)+obj2(65);
}
