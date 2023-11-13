// explain the operation of the following code

#include <stdio.h>

int main(){
  int a, b;

  printf("Give two integers: ");
  scanf("%d %d", &a, &b);
    
  if (a>b)
    printf("%d", a);
  else
    printf("%d", b);
  return 0;
}
