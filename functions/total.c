// uses a function total to sum up all integers up to a value given by the user

#include<stdio.h>

int total(int num)
{
  int sum=0;
  for (int i=0;i<=num;i++)
    sum+=i;
    return sum;
}

int main(){

  int num;

  printf("Mexro poion arithmo na a8roiso: ");
  scanf("%d", &num);
  printf("To a8roisma einai: %d", total(num));
  return 0;
}
