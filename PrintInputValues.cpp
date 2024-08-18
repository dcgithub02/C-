// obj[0]=47 , obj[1]=49,obj[2]=50,obj[3]=51,obj[4]=52
// operator [](obj,0)=47;
#include<iostream>
using namespace std;
class Integer
{
	public:
	int index;
	int arrayOfNum[50];
	int& operator [](int index)
	{  
	  return this->arrayOfNum[index];
	}
};
int main()
{
	Integer obj;
	int offset=0;
	obj[0]=100;
	obj[1]=48;
	obj[2]=49;
	obj[3]=50;
	obj[4]=51;
	for(offset=0;offset<5;offset++)
	{
		cout<<endl<<"arrays : "<<obj.arrayOfNum[offset];
	}
}
