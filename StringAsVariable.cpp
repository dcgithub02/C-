#include<iostream>
int main()
{
	int offset;
	for(offset=0;"algorithm"[offset]!=0;offset++)
	{
		printf("\n\t \"alogrithm\"[%d] %c",offset,"algorithm"[offset]);
	}
	
	printf("\n\t ch : %c ", *("algorithm"+1));
}
