#include<iostream>
class Discount
{
	int costPrice,discountPercentage;
	float discountedPrice;
	public:
           void setData(int costPrice,float discountPercentage)
  			{  
			   this->costPrice=costPrice;
			   this->discountPercentage=discountPercentage;	
			}
		  void calculateDiscount()
		   {
			this->discountedPrice= this->costPrice*(100-this->discountPercentage)/100;
		   }
		  void display()
	       {			
		    printf("discounted price is %.2f",this->discountedPrice);
	       }
};
int main()
{
	Discount obj;
	obj.setData(100,10);
	obj.calculateDiscount();
	obj.display();
}
