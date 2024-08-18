#include<iostream>
using namespace std;
class String
{
	char* name;
	public :
		void setData(char str[])
		{
			int length,offset;
			for(length=0;str[length]!='\0';length++);
			this->name= new char[length+1];
			for(offset=0;str[offset]!='\0';offset++)
			{
				this->name[offset]=str[offset];
			}
			this->name[offset]= '\0';		
		}
		String& operator=(String obj)
		{
			int length,offset;
			for(length=0;obj.name[length]!='\0';length++);
			this->name= new char[length+1];
			for(offset=0;obj.name[offset]!='\0';offset++)
			{
				this->name[offset]=obj.name[offset];
			}
			this->name[offset]='\0';
			return(*this);
			
		}
		void modifyString()
		{
			this->name[3]='@';
		}
		void display()
		{
			cout<<endl<<"name : "<<this->name;
		}
};
int main ()
{
	String obj,obj1;
	obj.setData("Prayog");
	obj1=obj;
	obj.display();
	obj1.display();
	obj.modifyString();
	obj.display();
	obj1.display();
}
