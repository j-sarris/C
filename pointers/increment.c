#include <stdio.h>

int main(){

  char ch, *ch_ptr;
  int a, *int_ptr;
  double d, *double_ptr;

  ch='A';
  a=15;
  d=3.14;

  ch_ptr=&ch;
  int_ptr=&a;
  double_ptr=&d;

  printf("ch=%c, a=%d, d=%f\n", *ch_ptr, *int_ptr, *double_ptr);
  printf("ch_ptr=%p, a_ptr=%p, d_ptr=%p\n", ch_ptr, int_ptr, double_ptr);

  ch_ptr++;
  int_ptr++;
  double_ptr++;

  printf("ch_ptr=%p, a_ptr=%p, d_ptr=%p\n", ch_ptr, int_ptr, double_ptr);
  printf("ch=%c, a=%d, d=%f\n", *ch_ptr, *int_ptr, *double_ptr);
   
}
