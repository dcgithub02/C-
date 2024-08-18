#include<stdio.h>
struct ComplexNumber
{
	float real;
	float imaginary;	
};
void setData(struct ComplexNumber *objPtr,float real,float img);
void display(struct ComplexNumber *objPtr);
int main()
{
	struct ComplexNumber obj;
	setData(&obj,12,23);
	display(&obj); 
}
void setData(struct ComplexNumber *objPtr,float real,float img)
{
//	(*objPtr).real=real;
//	(*objPtr).imaginary=img;
	objPtr->real=real;
	objPtr->imaginary=img;
}
void display(struct ComplexNumber *objPtr)
{
	printf("%f",objPtr->real);
	printf("%f",objPtr->imaginary);
} 
