#include<iostream>
using namespace std;
template<typename Type>
class TemplateCls
{
	
	Type number;
	public:
	void setValue(Type number)
	{
		this->number=number;
	}
	int equals(Type number)
	{
		if(this->number==number)
		{
			cout<<"\nValues are identical.";
			return(1);
		}
			cout<<"\nValues didnt match.";
		return(0);
	}
	int equals(TemplateCls obj)
	{
		if(this->number==obj.number)
		{
			cout<<"\nValues are identical.";
			return(1);
		}
		cout<<"\nValues didnt match.";
		return(0);
		
	}
};
template<>
class TemplateCls<char*>
{
	char* name;
	public:
	setValue(char* name)
	{
		int length=0;
		for(length=0;name[length]!='\0';length++);
		this->name= new char[length];
		for(length=0;name[length]!='\0';length++)
		{
			this->name[length]=name[length];
		}
		this->name[length+1]='\0';
	}	
	int equals(char* name)
	{
		int length=0;
		int length1=0;
		int count=0;
		for(length=0;name[length]!='\0';length++);
		for(length1=0;this->name[length1]!='\0';length1++);
		if(length==length1)
		{
			for(length=0;name[length]!='\0';length++)
			{
				if(this->name[length]==name[length])
				{
					count++;
				}
			}
			if(count==length1)
			{
				cout<<"\nNames are identical.";
				return 1;
			}
			else
			{
				cout<<"\nValues didnt match.";
				return 0;
			}
		}
		else
		{
			cout<<"\nValues didnt match.";
			return 0;
		}
	}
	int equals(TemplateCls obj)
	{
		int length=0;
		int length1=0;
		int count=0;
		for(length=0;obj.name[length]!='\0';length++);
		for(length1=0;this->name[length1]!='\0';length1++);
		if(length==length1)
		{
			for(length=0;obj.name[length]!='\0';length++)
			{
				if(this->name[length]==obj.name[length])
				{
					count++;
				}
			}
			if(count==length1-1)
			{
				cout<<"\nnames are identical.";
				return 1;
				
			}
			else
			{
				cout<<"\nValues didnt match.";
				return 0;
				
			}
		}
		else
		{
			cout<<"\nValues didnt match.";
			return 0;
		}
	}
};
int main()
{
	TemplateCls<int> obj1,obj2;
	obj1.setValue(11);
	obj2.setValue(11);
	cout<<"\nComparing primitive datatypes...";
	obj1.equals(obj2);
	TemplateCls<char*> obj3,obj4;
	obj3.setValue("deepak");
	obj4.setValue("deepak");
	cout<<"\ncomparing Strings...";
	obj3.equals(obj4);
}
