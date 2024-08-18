#include<stdio.h>
struct AddNumbers{
	int number1,number2,number3,number4,number5;
	
};

setData(struct AddNumbers *objPtr, int num1,int num2,int num3, int num4, int num5)
{
	objPtr->number1=num1;
	objPtr->number2=num2;
	objPtr->number3=num3;
	objPtr->number4=num4;
	objPtr->number5=num5;
}

AddNumbers AddObjs(struct AddNumbers *objPtr1, struct AddNumbers *objPtr2)
{
	AddNumbers obj;
	obj.number1= objPtr1->number1 +objPtr2->number1;
	obj.number2=objPtr1->number2+objPtr2->number2;
	obj.number3=objPtr1->number3+objPtr2->number3;
	return obj;
}
void displayNumbers(struct AddNumbers *objPtr)
{
	printf("\n\t %d %d %d ",objPtr->number1,objPtr->number2,objPtr->number3);
}
int main()
{
	struct AddNumbers obj;
	struct AddNumbers obj1;
	struct AddNumbers objPtr;
	setData(&obj,1,2,3,4,5);
	setData(&obj1,5,4,3,2,1);
	objPtr=AddObjs(&obj,&obj1);
	displayNumbers(&objPtr);
}
