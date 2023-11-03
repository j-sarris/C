#include<stdio.h>

int main() {
  int array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  int i=0;

  // print array values using a for loop
  printf("Printing using the for loop\n");
  for (i=0; i<10; i++){
    printf("%d\n", array[i]);
  }

  // print array values using a while loop
  printf("\nPrinting using the while loop\n");
  i=0;
  while (i<10){
    printf("%d\n", array[i]);
    i++;
  }
  
  return 0;       
}
