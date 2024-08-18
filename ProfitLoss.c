#include<stdio.h>
#include<conio.h>
struct Commodity
{
	float costPrice;
	float sellingPrice;
	float loss;
	float profit;
};
	void  setData(struct Commodity *objptr,float costPrice1,float sellingPrice1)
	{
		objptr->costPrice= costPrice1;
		objptr->sellingPrice =sellingPrice1;
		
	}
	void calculateProfitLoss(struct Commodity *objPtr)
	{
		if((objPtr->costPrice)>(objPtr->sellingPrice))
		{
		  objPtr->loss= (objPtr->costPrice)-(objPtr->sellingPrice);
		}
		else if(objPtr->sellingPrice>objPtr->costPrice)
		{
			objPtr->profit = objPtr->sellingPrice - objPtr->costPrice;
		}
		else
		{
			objPtr->profit=-1;
			objPtr->loss=-1;
		}
		
	}
	void displayData(struct Commodity *objptr )
	{
		if(objptr->loss>0)
		{
			printf("\n\tLoss : %f",objptr->loss);
		}
		else if(objptr->profit>0)
		{
			printf("Profit : %f",objptr->profit);
		}
		else
		printf("cost price is equal to selling price");
	}

	int main()
	{
		struct Commodity obj1;
	//	float costPrice;
	//	float sellingPrice;
		//float profit;
	//	float loss;
		setData(&obj1,20,20);
		calculateProfitLoss(&obj1);
		displayData(&obj1);
	}

