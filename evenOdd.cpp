#include<iostream>
using namespace std; 
int main()
{
	int count,index,counter;
	int *evenPtr , *oddPtr;
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
	for(count=0;count<10;count++)
	{
		if(numbers[count]%2==0)
		{
			
			evenPtr[index]= numbers[count];
			index++;
		}
		else
		{
			
			oddPtr[counter] = numbers[count];
			counter++;
		}
	}
	for(index=0;index<5;index++)
	{
	  std::cout << "even Number: " << evenPtr[index] << std::endl;
	  
	}
	
	for(index=0;index<5;index++)
	{	
	std::cout << "Odd Number: " << oddPtr[index] << std::endl;
    }

}
