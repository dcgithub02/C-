#include<iostream>
class Commodity
{
	int costPrice,sellingPrice,profit,loss;
	
	public:
	void setData(int costPrice,int sellingPrice)
	{
		this->costPrice=costPrice;
		this->sellingPrice=sellingPrice;
		
	}
    void calculateProfitLoss()
	{ 
	   if(this->sellingPrice>this->costPrice)
	   {
		   this->profit=this->sellingPrice - this->costPrice;
       }
	   else if(this->sellingPrice<this->costPrice)
	   {
	   	   this->loss=this->costPrice-this->sellingPrice;
       }   
       else
       {
       	 this->loss=0;
       	 this->profit=0;
	   }
	  	
	}
	
	void display()
	{
		 if(this->sellingPrice>this->costPrice)
		printf("\n\t Profit is %d", this->profit);
		else if(this->sellingPrice<this->costPrice)
		printf("\n\t loss is %d", this->loss);
		else printf("\n\t Cost price is equal to selling price %d",costPrice);
	}
	
};
int main()
{
	Commodity obj;
	obj.setData(15,15);
	obj.calculateProfitLoss();
	obj.display();
}
