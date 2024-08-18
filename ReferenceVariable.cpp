#include<iostream>
using namespace std;
int main()
{
	int num=95;
	int& refVar=num;
	refVar=97;
	cout<<num<<" "<<refVar;
	
}

//2nd way
{
	int num=95;
	int const &refVar=123;
	refVar=97;
	cout<<num<<" "<<refVar;
	
}
//3rd way
{
	int num[5]={1,2,3,4,5};
	int(&refVar)[5]=num;
	cout<<"List ";
	for(int index=0;index<5;index++)
	{
		cout<<refVar[index]<<" ";
	}
	
}
//4th way

