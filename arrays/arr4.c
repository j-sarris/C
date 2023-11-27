#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int array[100], i;
  int sum=0, even=0, odd=0; 

  srand(time(NULL));

  // insert random values into array
  for (i=0; i<100; i++)
    array[i]=rand();

  for (i=0; i<100; i++){
    sum+=array[i]; // calculate the sum of all elemens
        
    if (array[i]%2) 
      odd++; // calculate number of odd elements
    else 
      even++; // calculate number of even elements
  }
    
  printf("To athroisma olon ton stoixeion einai %d\n", sum);
  printf("Yparxoyn %d monoi kai %d zygoi arithmoi ston pinaka", odd, even);
  return 0;
}
