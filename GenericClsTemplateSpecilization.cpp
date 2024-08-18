//template specilization
#include<iostream>
using namespace std;
template<typename Type>
class GenericCls
{
	Type number;
	public :
		GenericCls(Type num)
		{
			this->number=num;
		}
		int equals(Type num)
		{
			return ((this->number==num)?1:0);
		}
		int compare(Type num)
		{
			if(this->number<num)
			{
				return(-1);
			}
			else if(this->number>num)
			{
				return(1);
			}
			else
			{
				return (0);
			}
		}
};
template<>
class GenericCls<char*>
{
	char* charArrayPtr;
	public:
		GenericCls(char* name)
		{
			int length;
			for(length=0;name[length]!='\0';length++);
			charArrayPtr= new char[length+1];
			for(length=0;name[length]!='\0';length++)
			{
				charArrayPtr[length]=name[length];
			}
			charArrayPtr[length]='\0';
			printf("\n\t string");
			
		}
		int equals(char * name)
		{
			for(int length=0;name[length]!='\0';length++)
			{
				if(charArrayPtr[length]!=name[length])
				{
					return(0);
				}
			}
			return(1);
		}
		int compare(char* name)
		{
			int index;
			for(index=0;charArrayPtr[index]!='\0'&& name[index]!='\0';index++)
			{
				if(charArrayPtr[index]<name[index])
				{
					return(-1);
				}
				else if(charArrayPtr[index]>name[index])
				{
					return(1);
				}
			}
			if(charArrayPtr[index]=='\0')
			{
				if(name[index]=='\0')
				{
					return(0);
				}
				else
				{
					return(-1);
				}
			}
			else
			{
				return(1);
			}
		}
};
int main()
{
	int flag;
	GenericCls<int> obj1= GenericCls<int>(12);
	GenericCls<char*> obj2=GenericCls<char*>("ram");
	flag=obj1.equals(12);
	cout<<flag<<" ";
	flag=obj2.equals("ram");
	cout<<flag<<" ";
	flag=obj2.compare("ramp");
	cout<<flag<< " ";
	flag=obj2.compare("dump");
	cout<<flag<<" ";
}
