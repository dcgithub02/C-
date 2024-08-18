#include<iostream>
using namespace std;
void showValue(int(&array1)[5])
{
	cout<<"list";
	for(int index=0;index<5;index++)
	{
		cout<<array1[index]<<" ";
	}
}
int main()
{
	int num[5]=(1,8,90,54,67);
	showValue(num);
}
