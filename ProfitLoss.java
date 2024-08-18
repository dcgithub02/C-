class Calculate{


 int profit,loss;
 int costPrice,sellingPrice;
 
 public setData(int costPrice,int sellingPrice)
 {
      this.costPrice=costPrice;
      this.sellingPrice=sellingPrice;
 }
 
 public int calculation()
 {
   if(this.SellingPrice>this.costPrice)
   {
   
    this.profit=this.sellingPrice-this.costPrice;
    return this.profit;
   }
   else
   {
    this.loss=this.costPrice-this.sellingPrice;
    return this.loss;
   }
}
public void display()
{
  if(this.loss>0)
  {
  system.out.println("loss is %d"+ this.loss);
  }
  else if(this.profit>0)
  {
  system.out.println(this.loss>0);
  }
  else
  { 
   system.out.println("cost price is equal to selling price");
  }
}
}
class ProfitLoss
{

public static void main(String args[])
{
   Calculate obj= new Calculate();
   obj.setData(100,200);
   obj.calculation();
   obj.display();
}
}
