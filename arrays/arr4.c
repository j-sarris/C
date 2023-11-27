#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int array[100], i;
  int sum=0, even=0, odd=0; 
  int min, max, pos_min=0, pos_max=0;

  srand(time(NULL));

  // insert random values into array
  for (i=0; i<100; i++)
    array[i]=rand();

  min=max=array[0]; // initialize variables to store min and max elements
    
  for (i=0; i<100; i++){
    sum+=array[i]; // calculate the sum of all elemens
        
    if (array[i]%2) 
      odd++; // calculate number of odd elements
    else 
      even++; // calculate number of even elements

    if (array[i]<min){
      min=array[i]; // store min element of array
      pos_min=i; // store the position of the minimum element 
    }

    if (array[i]>max){
      max=array[i]; // store max element of array
      pos_max=i; // store the position of the maximum element            
    }
        
  }
    
  printf("To athroisma olon ton stoixeion einai %d\n", sum);
  printf("Yparxoyn %d monoi kai %d zygoi arithmoi ston pinaka\n", odd, even);
  printf("Elaxisto stoixeio to %d, sth thesi %d\n", min, pos_min);
  printf("Megisto stoixeio to %d, sth thesi %d", max, pos_max);
  return 0;
}
