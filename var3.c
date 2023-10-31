#include <stdio.h> 

int main(void)
{
	// difference between float and double variables

  // initialize variables
  float a=10.0;
  double b=10.0;

  printf("a=%f\n", a);
  printf("b=%f\n", b);

  //divide by 3
  a=a/3;
  b=b/3;

  printf("a/3=%20.17f\n", a);
  printf("b/3=%20.17f\n", b);

  //divide again by 3
  a=a/3;
  b=b/3;

  printf("a/9=%20.17f\n", a);
  printf("b/9=%20.17f\n", b);

  // multilpy by 9 so as to get initial values
  a=a*9;
  b=b*9;

  printf("a=%20.17f\n", a);
  printf("b=%20.17f\n", b);
        
	return 0;    
}
