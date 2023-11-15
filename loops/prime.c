// Check if a number, given by the user, is prime or not

#include <stdio.h>
#include <stdbool.h>

int main(){

  int num;
  bool prime=true;

  printf("Give number to check if it is a prime: ");
  scanf("%d", &num);

  for(int i=2;i<=num/2;i++)
    if(num%i==0) prime=false;
    
  if (prime)
    printf("Number %d is prime", num);
  else
    printf("Number %d is not prime", num);

    return 0;
}
