// sums up all integers up to a number given by the user
//E.g. if the user gives 6, the program calculates the sum 1+2+3+4+5+6

#include <stdio.h>

int main(){

  int lim, sum=0;

  printf("Up to which number to calculate the sum: ");
  scanf("%d", &lim);

  for (int i=1;i<=lim;i++)
    sum=sum+i;

  printf("\n1+2+...+%d=%d",lim, sum);

  return 0;
}
