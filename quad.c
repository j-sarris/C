// solves the quadratic equation of the form "ax^2 + bx + c = 0", with a<>0

#include<stdio.h>
#include<math.h>
 
int main() {
  float a, b, c;
  float desc, root1, root2;

  printf("\nEnter the Values of a : ");
  scanf("%f", &a);
  printf("\nEnter the Values of b : ");
  scanf("%f", &b);
  printf("\nEnter the Values of c : ");
  scanf("%f", &c);

  desc = sqrt(b * b - 4 * a * c);

  if (desc>0){
    root1 = (-b + desc) / (2.0 * a);
    root2 = (-b - desc) / (2.0 * a);

    printf("\nFirst Root : %f", root1);
    printf("\nSecond Root : %f", root2);
  }
  
  else if (desc==0){
    root1 = (-b) / (2.0 * a);
    printf("\nDouble Root : %f", root1);
  }
  
  else {
    printf("\nNo real Roots");
  }

  return (0);
}
