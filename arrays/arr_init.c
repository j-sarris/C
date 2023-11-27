#include <stdio.h>

int main(){

  int i;

  int arr1[]={3, 6, 1, 8, 5}; // initialize a 5 positions array. Index from 0 to 4
  int arr2[10]={3, 6, 1, 8, 5};; // reserves 10 positions for the array. Assign values to the first 5
  char str1[] ="Hello World!";
  char str2[]={'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

  for (i=0; i<10; i++){ // No error for index grater than 4
    printf("arr1[%d]=%d\n", i, arr1[i]);
  }

  printf("\n======Print the second array =======\n");


  for (i=0; i<10; i++){ // No error for index grater than 4
    printf("arr2[%d]=%d\n", i, arr2[i]);
  }

  printf("\n======Print the first string=======\n");


  for (i=0; i<12; i++){ // No error for index grater than 4
    printf("%c", str1[i]);
  }

  printf("\n%s", str1);

  printf("\n======Print now the second string=======\n");

  for (i=0; i<12; i++){ // No error for index grater than 4
    printf("%c", str2[i]);
  }

  printf("\n%s", str2);

  return 0;
}
