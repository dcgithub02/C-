#include>iostream>
using namespace std;
template<typename Type>
Type maximum(Type value)
{
	return value;
}
template<typename Type1,typename Type2>
auto maximum(Type1 val1,Type2 val2)
{
	if(val1>val2)?return val1:val2;
}
template<typename Type1,typename...Type2>
auto maximum(Type1 val1,Type2...val2)
{
	cout<<val1;
	return maximum(val1,maximum(val2...));
}
int main()
{
	auto max=maximum(1,3.5,6,78,90);
}
