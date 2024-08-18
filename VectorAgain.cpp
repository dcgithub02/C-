#include<iostream>
using namespace std;
template<typename Type>
class Vector
{
	private:
    Type *numbers;
	int size,index;
	public:
	Vector()
	{
	  this->size=10;
	  this->numbers= new Type[this->size];
	  index=0;	
	}
	Vector(int size)
	{
		this->size=size;
		this->numbers= new Type[this->size];
		index=0;
	}	
	
	void add(Type value)
	{
		Type *temp;
		int offset;
		if(this->index<this->size)
		{
			numbers[index]=value;
			this->index++;
		}
		else
		{
			temp= new Type[this->size*2];
			for(offset=0;offset<this->size;offset++)
			{
				temp[offset]=numbers[offset];
			}
			temp[offset]=value;
			delete(this->numbers);
			this->numbers=temp;
			this->size=this->size*2;
			this->index=this->index+1;
		}
	}
	
	Type getValue(int position)
	{
	  if(position>=0 && position<this->index)
	   {
	  	 return this->numbers[position];
	   }
	   else
	   {	  
	   	 cout<<"index out of bound exception";
	   	 system("pause");
	   	 exit(0);	
	   }
	}
	
	void addAll(Vector obj)
	{
		int offset,offset1=0;
		Type *temp;
		temp= new Type[this->index+obj.index];
	
		for(offset=0;offset<this->index;offset++)
		{
			temp[offset]=this->numbers[offset];
			
		}
		for(offset1=0;offset1<obj.index ;offset1++)
		{
		   temp[offset]=obj.numbers[offset1];
		   offset++;
		}
		delete(this->numbers);
	    this->numbers=temp;	 
	    this->size=this->index+obj.index;
	    this->index=offset;
	}
	void addElement(Type value)
	{
		int offset;
		Type *temp;
		temp= new Type[this->index+1];
		for(offset=0;offset<this->index;offset++)
		{
		temp[offset]=this->numbers[offset];
		}
	    temp[offset]=value;
	    delete(this->numbers);
	    this->numbers=temp;	 
	    this->size=this->index+1;
	    this->index=offset+1;
	}
 void displayAll()
	{
		int offset;
		for(offset=0;offset<this->index;offset++)
		{
			cout<<endl<<this->numbers[offset];
		}
		
	}
	void capacity()
	{
		cout<<endl<<this->index;
	}
	void clear()
	{
	this->size=0;
	this->index=0;
	delete(this->numbers);
	}
	Vector clone()
	{
	 Vector temp;
	 
	 temp.size=this->size;
	 temp.index=this->index;
	 temp.numbers=this->numbers;
	 return temp; 
   }
   int contains(Type key)
   {
      int offset;
	  for(offset=0;offset<this->size;offset++)
	  {
	  	if(this->numbers[offset]==key)
	  	{
	  		this->index=offset;
	  		cout<<endl<<"Key is at position "<<this->index;
	  		cout<<endl<<"Key is  "<<key;
	  		return (1);
		 }
	  }   
	  return (0);	
   }
  void containsAll(Vector obj )
   {
   	int offset,offset1,counter=0,count=0;
   	
   	for(offset=0;offset<this->index;offset++)
   	{
   		for(offset1=0;offset1<obj.index;offset1++)
	   {
	 
   	if(this->numbers[offset]==obj.numbers[offset1])
   	{
   	count++;
   	break;
   	
   	}
   }
}
//cout<<endl<<count;
//cout<<endl<<obj.index;
   if(count==obj.index)
   	{
   		cout<<endl<<"All the elements are present";
	}
	   else
	   {
		 cout<<"All the elements are not present ";
	   } 

}
 void copyInto(Type num[])
 {
 	int offset;
 	for(offset=0;offset<this->index;offset++)
 	{
 		num[offset]=this->numbers[offset];
 		
	 }
	 for(offset=0;offset<this->index;offset++)
	 {
	 	cout<<endl<<num[offset];
	 }
 }
 void firstElement()
 {
 	cout<<endl<<"first element of the vector is "<<this->numbers[0];
 }
  Type get(int index)
 {
 	return this->numbers[index];
 }
};
int main()
{
	Vector<int> vc;
	Vector<int> vcClone;
	int element;
	vc.add(1);
	vc.add(2);
	vc.add(3);
	vc.add(4);
	vc.add(6);
	Vector<int> vc1;
	vc1.add(1);
	vc1.add(44);
//	vc1.add(3);
	//vc1.add(4);
	vc.containsAll(vc1);

	//vc1.add(55);
	//cout<<vc.getValue(2);
   // vc.addAll(vc1);
   // vc.addElement(66);
    //vc.add(77);
   //cout<<endl<<vc.getValue(10);//77.77
 //   vc.capacity();//11
 //   vcClone= vc.clone();
  // vcClone.displayAll();
   // vc.clear();//
   // cout<<endl<<vc.getValue(10);//0
  // vc.capacity();//11
   //vcClone.capacity();
  //containsCheck= vcClone.contains(88);
  //cout<<endl<<"searched key present or not "<<containsCheck;
   // vc.displayAll();
 int num[5];
 vc.copyInto(num);
 vc.firstElement();
 element=vc.get(1);
 cout<<endl<<"second element is "<<element;
  
}
