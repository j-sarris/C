// Sums up 5 integers, given by the user

#include <stdio.h>

int main(){

  int i=0, num, sum=0;
  // TO DO Use a for loop instead of while
  while (i<5){
    printf("Give number: ");
    scanf("%d", &num);
    sum=sum+num;
    i++;
  }

  printf("\nSum = %d", sum);
  return 0;
}
