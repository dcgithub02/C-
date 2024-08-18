#include<Stdio.h>
struct SecondNumbers
{
	int number1;
	float number2;
};
struct FirstNumbers
{
	int num1;
	float num2;
	
};

void setData(struct SecondNumbers *objPtr1,int number1, float number2 )
{
	objPtr1->number1=number1;
	objPtr1->number2=number2;
}
int getNumber1(struct SecondNumbers *objPtr1)
{
	return objPtr1->number1;
}
float getNumber2(struct SecondNumbers * objPtr1)
{
	return objPtr1->number2;
}
int getNum1(struct FirstNumbers *objPtr)
{
	return objPtr->num1;
}
float getNum2(struct FirstNumbers * objPtr)
{
	return objPtr->num2;
}
void setData(struct FirstNumbers *objPtr, int num1, float num2)
{
	objPtr->num1=num1;
	objPtr->num2=num2;
}
FirstNumbers addData(struct FirstNumbers *objPtr,struct SecondNumbers *objPtr1)
{
	objPtr->num1= objPtr->num1+getNumber1(&objPtr1);
	objPtr->num2= objPtr->num2+getNumber2(&objPtr1);
    return objPtr;
}
SecondNumbers addData(struct SecondNumbers *objPtr1,struct FirstNumbers * objPtr)
{
	objPtr1->num1= objPtr1->num1+getNum1(&objPtr);
	objPtr1->num2= objPtr1->num2+getNum2(&objPtr);
    return objPtr1;
}
void displayData(struct FirstNumbers * objPtr)
{
	printf("%d",objPtr->num1);
	printf("%f",objPtr->num2);
}

int main()
{
	struct FirstNumbers objPtr;
	struct SecondNumbers objPtr1;
	struct FirstNumbers objPtr2;
	setData(&objPtr,10,15);
	setData(&objPtr1,20,25);
    objPtr2=addData(&objPtr,&objPtr1);
	displayData(&objPtr2);
}
