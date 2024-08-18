#include<iostream>
using namespace std;
template<typename Type>
class GenericCls
{
	private:
	Type number;
	public:
	 GenericCls(Type number)
	{
	this->number=number;	
	}
	
	int equals(Type number)
	{
		if(this->number!=number)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	int compare(Type number)
	{
		if(this->number>number)
		{
			return 1;
		}
		else if(this->number==number)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
};
template<>
class GenericCls<char *>
{
	private:
	char *charPtr;

	public:
	 GenericCls(char* ptr)
	{
			int length;
		for(length=0;ptr[length]!='\0';length++);
		charPtr = new char[length+1];
		for(length=0;ptr[length]!='\0';length++)
		{
			charPtr[length]=ptr[length];
		}
		charPtr[length+1]='\0';
	 } 
	 int equals(char * ptr)
	 {
	 	int length;
	 	for(length=0;ptr[length]!='\0';length++)
		{
				if(charPtr[length]!=ptr[length])
				{
					return 0;
				}
				
		 }	 
		 return 1;	
	 }
	 int compare(char *str)
	 {
	 	int index;
	 	for(index=0;charPtr[index]!='\0'&&str[index]!='\0';index++)
	 	{
	 		if(charPtr[index]>str[index])
	 		{
	 			return -1;
			 }
			 else if(charPtr[index]<str[index])
			 {
			 	return 0;
			 }
			 
		 }
		 if(charPtr=='\0')
		 {
		 	if(str=='\0')
		 	{
		 		return 1;
			 }
			 else
			 {
			 	return 0;
			 }
		 }
		 else
		 {
		 	return -1;
		 }
	 }
	 
};
int main()
{
	int flag;
	GenericCls<int> obj= GenericCls<int>(12) ;
	GenericCls <char*>obj1 = GenericCls<char*>("ram");
	flag=obj.equals(14);
	cout<<" "<<flag;
	
	flag=obj.compare(10);
	cout<<" "<<flag;
	flag=obj1.equals("ram");
		cout<<" "<<flag;
	flag=obj1.compare("dump");
		cout<<" "<<flag;
	flag=obj1.compare("tump");
		cout<<" "<<flag;
	
	
}

