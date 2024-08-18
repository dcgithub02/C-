#include<stdio.h>
#include<conio.h>
main()
{

int number;
int reversedNumber;
int originalNumber;
scanf("%d",&number);

originalNumber= number;
reversedNumber=reverse(number);

if(reversedNumber==originalNumber)
{
 printf("number is palindrome");
 printf("%d",reversedNumber);
}
else {
printf("number is not a palindrome")
printf("%d", reversedNumber);
}


}

int reverse(int number)

{
 int reverse=0;
 while(number>0)
 {
 reverse = reverse*10+ number%10;
 number = number/10;

}

return reverse;

}
