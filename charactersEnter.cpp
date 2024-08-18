#include<iostream>
int main()
{
char ch1,ch2,ch3,ch4;
printf("\n\t ch: ");
scanf("%c",&ch1);
fflush(stdin);
printf("\n\t ch2: ");
scanf("%c",&ch2);
while(fgetc(stdin)!='\n');
printf("\n\t ch3 :");
scanf("%c",&ch3);
printf("ch4: ");
scanf("%c",&ch4);
}

