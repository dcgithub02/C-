#include<iostream>
using namespace std;
template <typename Type1,typename Type2>
void functionTemp(Type1 number1,Type2 number2)
{
	cout<<number1;
	cout<<number2;
}

int main()
{
	functionTemp(12,16.5);
}
