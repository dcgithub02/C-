#include<iostream>
using namespace std;
class Strings
{

		int length,offset=0,length1,offset1=0,count;
	    public :
		char  *name;
		//concatenate program-Strings
		public :
		void operator =(char   *name1)
		{
			for(length=0;name1[length]!='\0';length++);
			this->name=new char[length+1];
			for(offset=0;name1[offset]!=0;offset++)
			{
				this->name[offset]=name1[offset];
			}
			this->name[offset]='\0';
		}
			
		Strings operator +(char * name2)
		{
			Strings add;
			for(length1=0;name2[length1]!='\0';length1++);
		    add.name=new char[length+length1+2];
		    for(offset1=0;this->name[offset1]!='\0';offset1++)
		    {
		     add.name[offset1]=this->name[offset1] ;
			}
		    for(count=0;name2[count]!='\0';count++)
		    {
		     add.name[offset1]=name2[count] ;
		     offset1++;
			}
			return(add);
		}
	   	operator char const * ()
		{
			 return this->name;
		}	
		//Read string- from the index provided
	  void subString(char * name,int start)
	{    
	      Strings obj;
	    
		int offset,offset1=0,length;
		for(length=start;name[length]!='\0';length++);
		obj.name= new char[length+1];
		
		for(offset=start;name[offset]!='\0';offset++,offset1++)
		{
			obj.name[offset1]=name[offset];
		}
		printf("\n %s",obj.name);
	}	
		//retrieve string- from the indexes provided
	  void subStrings(char  * name,int start,int end)
	{    
	     Strings obj;
		int offset,offset1=0,length;
		for(length=start;length<=end;length++);
		obj.name= new char[length+1];
		
		for(offset=start;offset<=end;offset++,offset1++)
		{
			obj.name[offset1]=name[offset];
		}
			obj.name[offset1]='\0';
		    printf("\n %s",obj.name);
	}

//to lower the case of a string
char * toLowerCase(char *name)
{
	    int offset;
	   
	    int lengthOfName;
	    for(lengthOfName=0;name[lengthOfName]!='\0';lengthOfName++);
	    char *temp= new char[lengthOfName+1];
		for(offset=0;name[offset]='\0';offset++)
		{
			temp[offset]=(name[offset]>64 && name[offset]<98)?name[offset]+32:name[offset];
		}
        temp[offset]='\0';
        return temp;
}
//to compare the strings
int equals(char *name,char *name2)
{
	int lengthOfName,lengthOfName2;
	int offset,flag;
	for(lengthOfName=0;name[lengthOfName]!='\0';lengthOfName++);
	for(lengthOfName2=0;name2[lengthOfName2]!='\0';lengthOfName2++);
	name=toLowerCase(name);
	name2=toLowerCase(name2);
	if(lengthOfName==lengthOfName2)
	{
		for(offset=0;name[offset]!='\0';offset++)
		{
		
			if(name[offset]=!name2[offset])
			{
			  return 0;
		    }
			else
			{
				
			}
	}
	return 1;
}
	else
	{
		return 0;
	}
}
//remove extra spaces
char* removeExtraSpace(char *name)
{
	char *target;
	int offset,index=0,length,count=0;
	for(length=0;name[length]!='\0';length++);
	target=new char[length+1];
	for(offset=0;name[offset]!='\0';offset++)
	{
		if(name[offset]==' ')
		{
		
		if(count==0)
		{
			target[index++]=' ';
			count=1;
		}
	}
		else
		{
			target[index++]=name[offset];
			count=0;
		}
	}
	target[index]='\0';
	return(target);
}
};


int main()
{
	Strings obj;
	Strings obj1;
	obj="deepak";
	obj=obj+"hello";
	cout<<endl<<obj;
	char name[30]="kris Gethin body by design";
	obj.subString(name,5);
    char name1[30]="kris Gethin body by design";
    obj.subStrings(name1,5,10);
    int flag;
    char namee[]="deepak";
    char name2[]="deepak";
    flag=obj.equals(namee,name2);
    printf("\n %d",flag);
    char extraSpace[100]="remove                 extra      spaces ";
	char *noSpaces;
	noSpaces=obj.removeExtraSpace(extraSpace);
	cout<<endl<<noSpaces;
	
}
