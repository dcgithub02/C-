#include<iostream>
using namespace std;
class String
{
	private:
	char *name;
	public :
	void operator=(char *name1)
	{
		int offset,length;
		for(length=0;name1[length]!='\0';length++);
		this->name=new char[length+1];
		for(offset=0;name1[offset]!='\0';offset++)
		{
			this->name[offset]=name1[offset];
		}
		this->name[offset]='\0';
	}
	String operator+(char *name1)
	{
		String add;
		int length1,length,offset,offset1;
		for(length=0;name1[length]!='\0';length++);
		for(length1=0;this->name[length1]!='\0';length1++);
		add.name= new char[length+length1+2];
		for(offset=0;this->name[offset]!='\0';offset++)
		{
			add.name[offset]=this->name[offset];
		}
		offset1=offset;
		//offset1++;
		for(offset=0;name1[offset]!='\0';offset++)
		{
			add.name[offset1]=name1[offset];
			offset1++;
		}
		add.name[offset1]='\0';
		return add;
	}
		String operator+(String obj)
	{
		String add;
		int length1,length,offset,offset1;
		for(length=0;obj.name[length]!='\0';length++);
		for(length1=0;this->name[length1]!='\0';length1++);
		add.name= new char[length+length1+2];
		for(offset=0;this->name[offset]!='\0';offset++)
		{
			add.name[offset]=this->name[offset];
		}
		offset1=offset;
		//offset1++;
		for(offset=0;obj.name[offset]!='\0';offset++)
		{
			add.name[offset1]=obj.name[offset];
			offset1++;
		}
		add.name[offset1]='\0';
		return add;
	}
	operator char const *()
	{
		return(this->name);
	}
	friend String operator +(char* name1,String obj);
};
String operator +(char *name1,String obj)
{
	String add;
	int length,offset,length1,offset1;
	for(length=0;name1[length]!='\0';length++);
	for(length1=0;obj.name[length1]!='\0';length1++);
	add.name= new char[length+length1+2];
	for(offset=0;name1[offset]!='\0';offset++)
	{
		add.name[offset]=name1[offset];
	}
	for(offset1=0;obj.name[offset1]!='\0';offset1++)
	{
		add.name[offset]=obj.name[offset1];
		offset++;
	}
	return add;
}

int main()
{
	String obj;
	obj="deepak";
	obj="hello"+obj+"Bye"+obj;
	cout<<"\n\t adding Strings : "<<obj;
}

