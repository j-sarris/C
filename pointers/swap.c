#include <stdio.h>

void poor_swap (int a, int b); // using variables to demonstrate that local function variables does not change main variable values
void swap (int *first, int *second); // using pointers to show that the actual main variables values are changed

int main()
{
  int a, b;

  printf("Give value of first variable: ");
  scanf("%d", &a);

  printf("Give value of second variable: ");
  scanf("%d", &b);

  poor_swap(a, b);
  printf("After poor_swap values in main are: a=%d b=%d\n", a, b);

  swap(&a, &b);
  printf("After swap values in main are: a=%d b=%d\n", a, b);

  return 0;
}

void poor_swap(int a, int b)
{
  int temp;

  temp=a;
  a=b;
  b=temp;

  printf("Inside poor_swap values are: a=%d b=%d\n", a, b);
}

void swap(int *first, int *second)
{
  int temp;

  temp=*first;
  *first=*second;
  *second=temp;

  printf("Inside swap values are: a=%d b=%d\n", *first, *second);
}
