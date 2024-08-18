#include<iostream>
using namespace std;
class Integer
{
	private:
		int number;
		public :
			Integer &operator=(const int &num)
			{
				this->number=num;
				return (* this);
			}
			Integer operator+(int & num)
			{
				Integer sum;
				sum.number=this->number+num;
				return sum;
			}
			operator int()
			{
				return(this->number);
			}
			friend Integer operator +(int num,Integer &obj);};
			Integer operator +(int num,Integer &obj)
			{
				Integer sum;
				sum.number=num+obj.number;
				return(sum);
			}
			int main()
			{
				Integer obj;
				obj=12;
				obj=5+obj;
				cout<<"\n\t sum : "<<obj;
				obj=obj+5;
				cout<<"\n\t sum : "<<obj;
			}

