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
	//ThirdStore obj;
	
};
struct ThirdStore
{
	int numb1;
	float numb2;
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
	 FirstNumbers obj;
	obj.num1= objPtr->num1+getNumber1(objPtr1);
	obj.num2= objPtr->num2+getNumber2(objPtr1);
    return obj;
}
FirstNumbers addData1(struct FirstNumbers *objPtr,struct SecondNumbers *objPtr1)
{
	 FirstNumbers obj;
	obj.num1= objPtr->num1+getNumber1(objPtr1);
	obj.num2= objPtr->num2+getNumber2(objPtr1);
    return obj;
}

SecondNumbers addDataSec(struct SecondNumbers *objPtr1,struct FirstNumbers  *objPtr)
{
	SecondNumbers obj;
	obj.number1= objPtr1->number1+getNum1(objPtr);
	obj.number2= objPtr1->number2+getNum2(objPtr);
    return obj;
}
void displayData(struct FirstNumbers * objPtr)
{
	printf("\n\t%d ",objPtr->num1);
	printf("\n\t%f ",objPtr->num2);
}
void displayDataSec(struct SecondNumbers * objPtr1)
{
	printf("\n\t%d ",objPtr1->number1);
	printf("\n\t%f ",objPtr1->number2);
}
void displayDataThird(struct FirstNumbers *obj)
{
	printf("\n\t%d ",getNum1(obj));
	printf("\n\t%f ",getNum2(obj));
}
int main()
{
	struct FirstNumbers objPtr;
	struct SecondNumbers objPtr1;
	struct FirstNumbers objPtr2;
	struct SecondNumbers objPtr3;
	struct ThirdStore objPtr4;
	int num1;float num2;
	setData(&objPtr,10,15);
	setData(&objPtr1,20,25);
    objPtr2=addData(&objPtr,&objPtr1);
   // objPtr4=setThird(objPtr4,&objPtr2);
    displayDataThird(&objPtr2);
   }
