#include<iostream>
using namespace std;
template <typename Type1,typename Type2>
class NewType
{
	Type1 num1;
	Type2 num2;
	public:
	void setData(Type1 num1,Type2 num2);

};
template<typename Type1,typename Type2>
void NewType<Type1,Type2>::setData(Type1 number,Type2 number2)
{
	
}
int main()
{
	NewType<int,float> obj1;
	
}
