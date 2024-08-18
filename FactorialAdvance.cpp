#include<stdio.h>

#include<conio.h>

float calculateFact(int num1)

{
  float fact = 1;
  int numberInc = num1 + 1;
  while (numberInc > 0) {
    fact = fact * numberInc;
    numberInc--;
  }
  return fact;
}

int main() {
  int number;
  float result = 0.0;
  printf(" enter the number ");
  scanf("%d", & number);

  for (int count = 1; count <= number; count++) 
  {
    result = result + count / calculateFact(count);
  }
  printf("\n result of number %d  is %f ", number, result);

}
