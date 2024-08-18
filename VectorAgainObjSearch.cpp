#include<iostream>
using namespace std;
class Demo
{
	private:
	char *name;
	int rollNo;
	float cgp;
	int size;
	public:
	void setName(char *name)
	{	
			int count;
		for(count=0;name[count]!='\0';count++)
		{
			this->name[count]=name[count];
		}
		this->name[count]='\0';
	
	}
	void setCGP(float cgp)
	{
		this->cgp=cgp;
	}
	void setROllNo(int rollNo)
	{	
		this->rollNo=rollNo;
	}
	int getRollNo()
	{
		return this->rollNo;
	}
	float getCGP()
	{
		return this->cgp;
	}
	char* getName()
	{
		return this->name;
	}
	int search(char* name)
	{
		int lengthOfName=0;
		int length=0;
		int count=0;
		for(lengthOfName=0;name[lengthOfName]!='\0';lengthOfName++);
		for(length=0;this->name[length]!='\0';length++);
		if(length==lengthOfName)
		{
			for(length=0;length<lengthOfName;length++)
			{
				if(this->name[length]==name[length])count++;
			}
			return((count==lengthOfName)?1:0);
		}
		return 0;
	}
};
template<typename Type,int SIZE>
class Vector
{
	private:
	Type *arr;
	int count;
	int sizeOfVector;
	public:
	Vector()
	{
		arr= new Type[SIZE];
		this->count=0;
		this->sizeOfVector=SIZE;
	}
	void add(Type value)
	{
		int counter;
		
		if(this->count<this->sizeOfVector)
		{
			this->arr[this->count]=value;
			this->count++;
		}
		else
		{
			Type *temp;
			this->sizeOfVector=this->sizeOfVector+(this->sizeOfVector/2);
			temp= new Type[this->sizeOfVector];
			for(counter=0;counter<=this->count;counter++)
			{
				temp[counter]=this->arr[counter];
			}
			this->arr=temp;
			this->arr[this->count]=value;
			this->count++;
			delete temp;
		}
	}
	Type& get(int index)
	{
		return this->arr[index];
	}	
	void showAll()
	{
		for(int counter=0;counter<this->count;counter++)
		cout<<"\n"<<this->arr[counter];
	}
	int size()
	{
		return this->sizeOfVector;
	}
};
	
int main()
{
	char *name;
	int count=0,value=0;
	Demo obj1,obj2,obj3;
	obj1.setName("deepak");
	obj1.setROllNo(11);
	obj1.setCGP(7.5f);
	obj2.setName("rajat");
	obj2.setROllNo(12);
	obj2.setCGP(8.5f);
	obj3.setName("naveen");
	obj3.setROllNo(13);
	obj3.setCGP(7.0f);
	Vector<Demo,3> obj4;
	obj4.add(obj1);
	obj4.add(obj2);
	obj4.add(obj3);
	cout<<obj4.get(0).getName();
	cout<<"Enter name to search ";
	cin>>name;
	cout<<"size   "<<obj4.size();
	while(count<obj4.size())
	{
		value=obj4.get(count).search(name);
		
		if(value==1)
		{
			cout<<"\nname matched "<<name;
			cout<<"\nRoll No is "<<obj4.get(count).getRollNo();
			cout<<"\nCGP is "<<obj4.get(count).getCGP();
			Demo& objref=obj4.get(count);
			objref.setROllNo(55);
			objref.setCGP(9.0f);
			cout<<"\nUpdated Roll No is "<<obj4.get(count).getRollNo();
			cout<<"\nUpdated CGP is "<<obj4.get(count).getCGP();
			break;
		}
		count++;
	}
	if(value==0)
	{
		cout<<"No match found ";
	}
		
}
