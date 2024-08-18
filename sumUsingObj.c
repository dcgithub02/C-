#include<stdio.h>
struct ComplexNumber
{
	int real;
	int imaginary;
	
};
struct ComplexNumber addNumbers(struct ComplexNumber obj1, struct ComplexNumber obj2)
{ 
	int real, imaginary;
	struct ComplexNumber obj3;
	obj3.real=obj1.real+obj2.real;
	obj3.imaginary=obj1.imaginary + obj2.imaginary;
	return obj3;
}
int main()
{
	int real,imagnary;
	struct ComplexNumber obj1,obj2,obj3;
    obj1.real=10;
    obj2.real=12;
    obj1.imaginary=12;
    obj2.imaginary=13;
 
    obj3= addNumbers(obj1,obj2); 
    printf("\n\t %d ",obj3.real);
    printf("\n\t %d",obj3.imaginary);
}

