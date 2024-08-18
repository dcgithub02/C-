#include<iostream>
using namespace std;
class String
{
	private:
	char* name;
	int sizeOfArray;
	public:
	int count=0;
	public:
	String()
	{
		name=new char[50];
		this->sizeOfArray=50;
	}
	String(int size)
	{
		name=new char[size];
		this->sizeOfArray=size;
	}
	String(char tempName[])
	{
		int length,offset;
		for(length=0;tempName[length]!='\0';length++);
		name=new char[length+1];
		this->sizeOfArray=length;
		for(length=0;tempName[length]!='\0';length++)
		{
			this->name[length]=tempName[length];
		}
		
		this->name[length]='\0';
	}
//	operator const char*()
//	{
//		return(this->name);
//	}
	friend istream& operator>>(istream &input,String &obj);
	friend ostream& operator<<(ostream &output,String &obj);
  
};

istream& operator>>(istream  &input,String &obj){
    
    input>>obj.name;
    return input;
}
ostream& operator<<(ostream &output,String &obj)
{
	output<<obj.name;
	return output;
}

String &  operator++()
{
   this->count= ++count ;
}


int main()
{
	String name="algorithm";
	String name1,object;
	cout<<endl<<"name : "<<name;
	cout<<"Enter name : ";
	cin>>name1;
	cout<<"name1 is :"<<name1;
//object=	object++;
//	cout<<object;
    object=	++object;
	cout<<object;
}

