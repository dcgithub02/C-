#include<stdio.h>
#include<conio.h>
struct Commodity
{   float discountPrice;
	float costPrice;
	float sellingPrice;
	float loss;
	float profit;
	int discountInPer;
};
	void  setData(struct Commodity *objPtr,float costPrice1,float discountInPer)
	{
		objPtr->costPrice= costPrice1;
		objPtr->discountInPer =discountInPer;	
	}
	void calculateProfitLoss(struct Commodity *objPtr)
	{
		if((objPtr->costPrice)>(objPtr->sellingPrice))
		{
		  objPtr->loss= (objPtr->costPrice)-(objPtr->sellingPrice);
		  objPtr->profit=-1;
		}
		else if(objPtr->sellingPrice>objPtr->costPrice)
		{
			objPtr->profit = objPtr->sellingPrice - objPtr->costPrice;
			objPtr->loss=-1;
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
			printf("\n\tLoss   : %f",objptr->loss);
		}
		else if(objptr->profit>0)
		{
			printf("\n\tProfit : %f",objptr->profit);
		}
		else
		printf("cost price is equal to selling price");
	}
	void calculateDiscountAndSellingPrice(struct Commodity *objPtr)
	{
		objPtr->discountPrice=objPtr->costPrice*(100-objPtr->discountInPer)/100;
		objPtr->sellingPrice=objPtr->costPrice-objPtr->discountPrice;
	}

	int main()
	{  
		struct Commodity obj1;
	    setData(&obj1,2000,20);
	    calculateDiscountAndSellingPrice(&obj1);
        calculateProfitLoss(&obj1);
	    displayData(&obj1);
	    
   
    
	}

