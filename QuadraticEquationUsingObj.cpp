#include<iostream>
#include<math.h>
#include<stdio.h>

class QuadraticEquation
//discrimanant=b2-4ac
{
	int coeffA,coeffB,constant;
	float discriminant,root1,root2;
	bool flag=false;
public:
void setData(int coeffA,int coeffB,int constant)
{
	this->coeffA=coeffA;
	this->coeffB=coeffB;
	this->constant=constant;
	
}	

void calculateRoots()
{
	if((this->coeffB*this->coeffB-4*this->coeffA*this->constant)>0)
	{
	  this->root1 =	-(-this->coeffB+ sqrt(this->coeffB*this->coeffB-4*this->coeffA*this->constant))/2*coeffA;
	  this->root2 =  -(-this->coeffB-sqrt(this->coeffB*this->coeffB-4*this->coeffA*this->constant))/2*coeffA;
	}
	else if((this->coeffB*this->coeffB-4*this->coeffA*this->constant)==0)
	{
		this->flag=true;
	}
	else
	{
		   this->root1=-this->coeffB/2*this->coeffA;
		   this->root2=this->root1;
	}
}
     void display()
     {
	  printf("\n\t root1 is %f",this->root1);
	  printf("\n\t root2 is %f",this->root2);
     }	
};
int main()
{
	QuadraticEquation obj;
	obj.setData(1,4,3);
	obj.calculateRoots();
	obj.display();
}
 
