// estimates the value of pi based on two different formulas
#include <stdio.h>

// estimates the value of pi using Wallis formula
// pi/2 = 2*2/1*3 * 4*4/3*5 * 6*6/5*7
float pi_Wallis(int limit)
{
  float estim = 1;
  for (int i=2;i<=limit;i=i+2){
    estim = estim * (i*i)/((i-1)*(i+1));
  }
  return estim;
}

// estimates the value of pi using Leibniz formula
// pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 ....
float pi_Leibniz(int limit)
{
  float estim = 1.0;
  for (int i=3;i<=limit;i=i+4){
    estim = estim - 1.0/i + 1.0/(i+2);   
  }
  return estim;
}

int main(){

  float pi;

  pi = pi_Wallis(1000); //first calculate by Wallis formula
  printf("Wallis Pi~=%f\n", pi*2.0);

  pi = pi_Leibniz(1000); //then calculate by Leibniz formula
  printf("Leibniz Pi~=%f", pi*4.0);

  return 0;
}
