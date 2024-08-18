#include<stdio.h>
#include<conio.h>
int main()
{

    int number;
  //  int flag1=0;
    printf("Enter the number ");
    scanf("%d",&number);
// flag1=palindrome(number);

    if(palindrome(number)==0)
    {
        printf("number is palindrome");
        printf("%d",number);
    }
    else
    {
        printf("number is not a palindrome");
        printf("%d", number);
    }


}

 int palindrome(int number)
{


    int originalNumber;
    int flag=0;
    originalNumber=number;

    int reverse=0;
    while(number>0)
    {
        reverse = reverse*10+ number%10;
        number = number/10;

    }
    if(reverse==originalNumber)
    {
         flag=0;


    }
    else
    {
         flag=1;

    }
    return flag;
}

