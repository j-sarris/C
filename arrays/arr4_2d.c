#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int array[10][10], i, j;
  int sum=0, even=0, odd=0; 
  int min, max, pos_min_i=0, pos_min_j=0, pos_max_i=0, pos_max_j=0;

  srand(time(NULL));

  // insert random values into the array
  for (i=0; i<10; i++)
    for (j=0; j<10; j++)
        array[i][j]=rand();

  min=max=array[0][0]; // initialize variables to store min and max elements
    
  for (i=0; i<10; i++){
    for (j=0; j<10; j++){
      sum+=array[i][j]; // calculate the sum of all elemens
        
      if (array[i][j]%2) 
        odd++; // calculate number of odd elements
      else 
        even++; // calculate number of even elements

      if (array[i][j]<min){
        min=array[i][j]; // store min element of array
        pos_min_i=i; // store the i position of the minimum element 
        pos_min_j=j; // store the j position of the minimum element 
      }

      if (array[i][j]>max){
        max=array[i][j]; // store max element of array
        pos_max_i=i; // store the i position of the maximum element            
        pos_max_j=j; // store the j position of the maximum element 
      }  
    }
  }
    
  printf("To athroisma olon ton stoixeion einai %d\n", sum);
  printf("Yparxoyn %d monoi kai %d zygoi arithmoi ston pinaka\n", odd, even);
  printf("Elaxisto stoixeio to %d, sth thesi %d, %d\n", min, pos_min_i, pos_min_j);
  printf("Megisto stoixeio to %d, sth thesi %d, %d", max, pos_max_i, pos_max_j);
  return 0;
}
