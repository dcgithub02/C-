#include<iostream>
class RealImaginary;
class ComplexNumbers
{
	int real;
	float imaginary;
	public:
	void setData(int real, float imaginary);
    int getReal();
 	float getImaginary();
	ComplexNumbers addData(RealImaginary obj1);
	void displayNumbers();
};
class RealImaginary
{
	int real;
	float imaginary;
	public:
    void setData(int real, float imaginary);
    
 		int getReal();
	    float getImag();
	RealImaginary addData(ComplexNumbers obj1);

	void displayData();
};
void ComplexNumbers::setData(int real, float imaginary)
{
		this->real=real;
		this->imaginary=imaginary;
}
int ComplexNumbers::getReal()
      {
	 	return this->real;
	  }  
	 float ComplexNumbers::getImaginary()
	  { 
	 	return this->imaginary;
	  } 
	
	ComplexNumbers ComplexNumbers::addData(RealImaginary obj1)
	{ 
	   ComplexNumbers obj2;
	   obj2.real= this->real+obj1.getReal();
	   obj2.imaginary=this->imaginary+obj1.getImag();
	   return obj2;
		
	}
   void	ComplexNumbers::displayNumbers()
	{
		printf("\n\t real number sum is %d" ,this->real);
		printf("\n\timaginary sum is %.2f", this->imaginary);
		
	}
	void RealImaginary::setData(int real, float imaginary)
	{
		this->real=real;
		this->imaginary=imaginary;
	}
	int RealImaginary::getReal()
	{
		return this->real;
	}
	float RealImaginary::getImag()
	{
		return this->imaginary;
	}
	RealImaginary RealImaginary::addData(ComplexNumbers obj1)
	{
		RealImaginary obj2;
		obj2.real=this->real+obj1.getReal();
		obj2.imaginary=this->imaginary+obj1.getImaginary();
		return obj2;
	}
	void RealImaginary::displayData()
	{
	 printf("\n\t real number sum is %d", this->real);
	 printf("\n\t imaginary sum is %.2f",this->imaginary);	
	}
	
	int main()
{
	ComplexNumbers obj;
	ComplexNumbers obj2;
	RealImaginary obj1;
	obj.setData(5,10);
	obj1.setData(5,10);
	obj2=obj.addData(obj1);
	obj2.displayNumbers();
	
}

