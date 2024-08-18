#include<iostream>
using namespace std;
class Integer2
{
	private:
	int number;
	public:
	Integer2(int number)
	{
		this->number=number;
	}	
	 operator int&()
	 {
	 	return this->number;
	 }
	Integer2 operator =(int number)
	{
		this->number=number;
		return *this;
	}
};
int main()
{
	int sum;
	Integer2 obj(0);
	for(obj=0;obj<5;obj++)
	{
		sum=obj+sum;
	}
	cout<<sum;
	
}
