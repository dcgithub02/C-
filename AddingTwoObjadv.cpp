#include<iostream>
class ComplexNumbers
{
	int real;
	float imaginary;
	public:
	void setData(int real, float imaginary)
	{
		this->real=real;
		this->imaginary=imaginary;
	}
	int getReal()
	{
		return this->real;
	}
	float getImag()
	{
		return this->imaginary;
	}
	ComplexNumbers addData(RealImaginary obj1)
	{
		ComplexNumbers obj2;
		obj2.real=this->real+obj1.getReal();
		obj2.imaginary=this->imaginary+obj1.getImaginary();
		return obj2;
	}
	displayData(ComplexNumbers obj)
	{
	 printf("\n\t real number sum is %d", obj->real);
	 printf("\n\t imaginary sum is %.2f",obj->imaginary);	
	}
	};
	
class RealImaginary
{
	int real;
	float imaginary;
	
	public:
    void setData(int real, float imaginary)
	 {
		this->real=real;
		this->imaginary=imaginary;
     }
     int getReal()
      {
	 	return this->real;
	  }  
	 float getImaginary()
	  { 
	 	return this->imaginary;
	  } 
	
	RealImaginary addData(RealImaginary obj,ComplexNumbers obj1)
	{ 
	   RealImaginary obj2;
	   obj2->real= obj->real+obj1.getReal();
	   obj2->imaginary=obj->imaginary+obj1.getImag();
	   return obj2;
		
	}
	displayNumbers(RealImaginary obj2)
	{
		printf("\n\t real number sum is %d" ,obj2->real);
		printf("\n\timaginary sum is %.2f", obj2->imaginary);
		
	}
};
int main()
{
	ComplexNumbers obj;
	ComplexNumbers obj2;
	RealImaginary obj1;
	obj.setData(5,10);
	obj1.setData(5,10);
	obj2=obj.addData(obj,obj1);
	obj.displayData(obj2);
	
}


