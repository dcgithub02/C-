#include<iostream>
class Numbers
{
    int num;
	public:
	setData(int num)
	{
		this->num=num;
	}
	Numbers sumOfObj(Numbers obj1)
	{ 
		Numbers obj;
		obj.num=this->num+obj1.num;
		return obj;
	}
    void display()
	{
		printf("total is %d ",this->num );
	}
};
int main()
{
	Numbers nbr,nbr1,nbr2,nbr3,nbr4,nbr5;
	Numbers temp;
	nbr.setData(10);
	nbr1.setData(20);
	nbr2.setData(30);
	nbr3.setData(40);
	nbr4.setData(50);
    temp=nbr.sumOfObj(nbr1);
    temp=temp.sumOfObj(nbr2);
    temp=temp.sumOfObj(nbr3);
    nbr5=temp.sumOfObj(nbr4);
    nbr5.display();
 }
