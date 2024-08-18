#include<stdio.h>
struct ComplexNumber
{
	float real;
	float imaginary;
	
}
setData(struct ComplexNumber *objptr,float real,float img)
{
	objptr->real=real;
	objptr->imaginary=img;
}
dsplayData(struct ComplexNumber *objptr)
{
	printf("%f",objptr->real);
	printf("%f",objptr->imaginary);
}

int main()
{
//	struct ComplexNumber objptr;
	setData(*objptr,12,14);
	displayData(*objptr);
}
