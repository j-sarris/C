// calculates the result of the function f(x)=x*x+10*x-5

#include<stdio.h>

float f(float x);

int main(){

  float num; 

  printf("Give x: ");
  scanf("%f", &num);
  printf("f(x)=%f", f(num));
}

float f(float x)
{
  return x*x+10*x-5;
}
