#include<iostream>
using namespace std;
template<typename Type>
Type combine(Type num1,Type num2)
{
    Type sum;
	sum=num1+num2;
	return sum;
}
template<>
char* combine(char* name1,char* name2)
{
	int offset,length,length1,offset1;
	char *temp;
	for(length=0;name1[length]!='\0';length++);
	for(length1=0;name1[length1]!='\0';length1++);
	temp = new char[length+length1+1];
	for(offset=0;offset<length;offset++)
	{
		temp[offset]=name1[offset];
	}
	for(offset1=0;offset1<length1;offset1++)
	{
		temp[offset++]=name2[offset1];
	}
	temp[offset]='\0';	
	return temp; 
}

int main()
{
	char name1[]="hello";
	char name2[]="bye";
	char *concatenate;
	int num1=10,num2=20,sum;
	concatenate=combine(name1,name2);
    sum=combine(num1,num2);
    cout<<endl<<sum;
    cout<<endl<<concatenate;
  
}
