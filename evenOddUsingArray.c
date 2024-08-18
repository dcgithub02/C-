#include<iostream.h>
using namespace std; 
int main()
{
	int count=0,index=0,counter=0;int *evenPtr , *oddPtr;
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
	evenPtr= new int[];
	oddPtr= new int[];
	for(count=0;count<10;count++)
	{
		if(numbers[count]%2==0)
		{
			
			evenPtr= numbers[count];
			index++;
		}
		else
		{
			
			oddPtr = numbers[counter];
			counter++;
		}
	}
	
	  std::cout << " even Number: " << evenPtr << std::endl;
	  std::cout << "Odd Number: " << oddPtr << std::endl;

}
