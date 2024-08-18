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
struct ThirdStore
{
	int numb1;
	float numb2;
};

void setData(struct FirstNumbers *objPtr, int num1, float num2)
{
	objPtr->num1=num1;
	objPtr->num2=num2;
}
void setData(struct SecondNumbers *objPtr1,int number1, float number2 )
{
	objPtr1->number1=number1;
	objPtr1->number2=number2;
}

void setData(struct ThirdStore *obj, int num1, float num2)
{
	obj->numb1=num1;
	obj->numb2=num2;
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

ThirdStore addObj(struct FirstNumbers *objPtr,struct SecondNumbers *objPtr1)
{
	ThirdStore obj;
	int temp1;
	float temp2;
	temp1= objPtr->num1+getNumber1(objPtr1);
	temp2= objPtr->num2+getNumber2(objPtr1);
	setData(&obj,temp1,temp2);
    return obj;
}
ThirdStore addObj(struct SecondNumbers *objPtr1,struct FirstNumbers *objPtr)
{
	ThirdStore obj;
	int temp1;
	float temp2;
	temp1=objPtr1->number1 +getNum1(objPtr);
	temp2=objPtr1->number2 + getNum2(objPtr);
	setData(&obj,temp1,temp2);
	return obj;
}
void displayDataThird(struct ThirdStore* obj)
{
	printf("\n\t%d ",obj->numb1);
	printf("\n\t%f ",obj->numb2);
}
int main()
{
	struct FirstNumbers objPtr;
	struct SecondNumbers objPtr1;
	struct ThirdStore objPtr4;
	setData(&objPtr,10,15);
	setData(&objPtr1,20,25);	
   // objPtr4= addObj(&objPtr,&objPtr1);
   objPtr4=addObj(&objPtr1,&objPtr);
    displayDataThird(&objPtr4);
}
