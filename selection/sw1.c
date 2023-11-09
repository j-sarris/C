/* Calculates operations of the form
a+b, a-b, a*b, axb, a/b
*/

#include <stdio.h>

int main(){

  float a, b;
  char c;

  printf("Give operation in the form a+b to carry out:");
  scanf("%f %c %f", &a, &c, &b);

  switch (c)
  {
    case '+':
      printf("%f %c %f=%f",a, c, b, a+b);
      break;
    case '-':
      printf("%f %c %f=%f",a, c, b, a-b);
      break;
    case '/':
      printf("%f %c %f=%f",a, c, b, a/b);
      break;
    case '*':
    case 'x':
      printf("%f %c %f=%f",a, c, b, a*b);
      break;
    default:
      printf("Wrong operation\n");
      break;
  }
  return 0;
}
