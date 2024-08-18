#include<iostream>
using namespace std;
int main()
{
	int num1=89;
	float num2=7.8f;
	auto out=num1+num2;//check in codeblocks .
	decltype(num1+num2) res= num1+num2;
	cout<<out<<" "<<res;
}
