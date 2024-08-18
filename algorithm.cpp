#include<iostream>
int main()
{
 int offset=0;
 printf("\n\t name :");
 for(offset=0;"algorithm"[offset]!='\0';offset++)
 {
 	printf("\n\t \"algorithm\"[%d]:%c",offset,"algorithm"[offset]);
 	
 }
 printf("\n\t ch :%c",*("algorithm"+1));
}
