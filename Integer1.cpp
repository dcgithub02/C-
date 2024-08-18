#include<iostream>
using namespace std;
class Integer1
{
	int number[5];
	int offset;
	public:
	Integer1 operator =(int value)
    {
	   for(offset=0;offset<5;offset++)
	   {
	   	if(offset==1)
	   	{ number[offset]=value+2;
	   		
		}
		else{
	
	   	  number[offset]=value;
	   	  value+1;
	   	  	}
	   }
	}	
};
int main()
{
	int numb[5];
	numb[0]=47;
	cout<<numb[0];
	cout<<numb[1];
}
