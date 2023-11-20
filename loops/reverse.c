/* Reverses the order of the digits of an integer number
  Calculates also the sum of its digits
*/
#include<stdio.h>

int main(){

  int num, rem, div, sum=0;

  printf("Give integer number: ");
  scanf("%d", &num);

  do{
    rem=num%10;
    div=num/10;
    printf("%d", rem);
    sum+=rem;  // Add last digit to the sum
    num=div;
  } while(num);

  printf("\nSum of digits=%d", sum);
  return 0;
}
