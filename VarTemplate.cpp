#include<iostream>
using namespace std;
template<typename Type>
Type maximum(Type num)
{
	return num;
}
template<typename Type1,typename Type2>
auto maxNum(Type1 num1,Type2 num2)
{
	return ((num1<num2)?num2:num1);
}
template<typename Type,typename...VarType>
auto maximum(Type number,VarType...numbers)
{
	cout<<"\n\t number :"<<number;
	return maxNum(number,maximum(numbers...));
}
int main()
{
	auto maxVal=maximum(2,3.4,78,78.6);
	cout<<"\n\tmaximum value is : "<<maxVal;
	
}
/*
auto maximum(2,VarType...numbers)
{
	cout<<"\n\t number :"<<number;
	return maxNum(2,maximum(numbers...));2,78.6
}
auto maximum(3.4,VarType...numbers)
{
	cout<<"\n\t number :"<<number;
	return maxNum(3.4,maximum(numbers...));3.4,78.6
}
auto maximum(78,VarType...numbers)
{
	cout<<"\n\t number :"<<number;
	return maxNum(78,maximum(numbers...));//78,78.6
}
Type maximum(Type num=78.6)
{
	return num;
	
}



