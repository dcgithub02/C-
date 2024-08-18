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
		this->name=name;
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
				if(this->name[length]==name[length])
				{
					count++;
				}
			}
			if(count==lengthOfName)
			{
				return 1;
			}
			else
			{
				return 0;
			}
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
			//cout<<"this count is "<<this->count;
			for(counter=0;counter<=this->count;counter++)
			{
				temp[counter]=this->arr[counter];
			
			}
			//cout<<"SIZE "<<this->sizeOfVector;
			this->arr=temp;
			this->arr[this->count]=value;
			this->count++;
			delete temp;
		}
		
	}
	Type get(int index)
	{
		return this->arr[index];
	}
	int indexOf(Type value)
	{
		int counter=0;
		for(int counter=0;counter<SIZE;counter++)
		{
			if(this->arr[counter]!=value)
			{
				continue;
			}
			else
			{
				return counter;
			}
		}
	}
	Type remove(int index)
	{
		Type value;
		int counter;
		value=this->arr[index];
		this->count=this->count-1;
		for(counter=index;counter<this->count;counter++)
		{
			this->arr[counter]=this->arr[counter+1];
		}
		//this->arr[counter]=-1;
		return value;
	}
	void showAll()
	{
		int counter=0;
		for(counter=0;counter<this->count;counter++)
		{
			cout<<"\n"<<this->arr[counter];
		}
		
	}
	int size()
	{
		return this->sizeOfVector;
	}
	Type lastElement()
	{
		return this->arr[this->count-1];
	}
	void setSize(int size)
	{
		this->sizeOfVector=size;
	}
	Type elementAt(int index)
	{
		return this->arr[index];
	}
	int capacity()
	{
		return this->count;
	}
	Type firstElement()
	{
		return this->arr[0];
	}
	void clear()
	{
		this->count=0;
	}
//	template<typename Type,int SIZE>
//	Vector& operator=(Vector<Type,SIZE> temp)
//    {
//    	return temp;
//    	
//	} 
};
	
int main()
{
	Vector<int,5> obj;
	int value;
	int count=0;
	char *name,*returnName;
	obj.add(1);
	obj.add(2);
	obj.add(3);
	obj.add(4);
	obj.add(5);
//	obj.showAll();
	//cout<<"\n removed element is "<<obj.remove(2);
	//cout<<"After removal list...";
//	obj.showAll();
	//cout<<"\n firstt "<<obj.firstElement();
	//cout<<"\n lastt "<<obj.lastElement();
	obj.add(10);
//	cout<<"\nAfter adding,new list is ...";
	//obj.showAll();
	//obj.clear();
	obj.add(11);
	obj.add(12);
	obj.add(13);
	obj.add(14);
	obj.add(15);
	//obj.showAll();
	cout<<"Memory extending since more elements added ";
	obj.add(16);
	obj.add(17);
	obj.add(18);
	obj.add(19);
	obj.add(20);
	obj.showAll();
	cout<<"\n firstt "<<obj.firstElement();
	cout<<"\n lastt "<<obj.lastElement();
	value=obj.get(5);
	cout<<"get value "<<value;
	
	Demo obj1;
	Demo obj2;
	Demo obj3;
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
	//char* name =obj1.getName();
		obj4.add(obj1);
		obj4.add(obj2);
		obj4.add(obj3);
	cout<<obj4.get(0).getName();
	cout<<"Enter name to search ";
	cin>>name;
	
	while(count<obj4.size())
	{
		//returnName=obj4.get(count).getName();
		//cout<< "returned name "<<returnName;
		value=obj4.get(count).search(name);
		if(value==1)
		{
			cout<<"\nname matched "<<name;
			cout<<"\nRoll No is "<<obj4.get(count).getRollNo();
			cout<<"\nCGP is "<<obj4.get(count).getCGP();
			obj4=obj4.get(count).setROllNo(55);
			obj4=obj4.get(count).setCGP(9.0f);
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
