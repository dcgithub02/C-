#include<stdio.h>
void blank()
{
	printf("Hello");
}
void (*ptrBlank)(void);
int main()
{
	ptrBlank=blank;
	ptrBlank();
	(*ptrBlank)();
}
