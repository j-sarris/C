#include <stdio.h>

int main(){

  int a, b, *p;

  a=10; 
  p=&a;

  printf("a=%d, address of a=%p, value of p=%p, p points to=%d\n", a, &a, p, *p);

  *p=60;

  printf("a=%d, address of a=%p, value of p=%p, p points to=%d", a, &a, p, *p);
}
