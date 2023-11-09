#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  // Sum up all the array elements
  for (int i=0; i<4; i++){
    for (int j=0; i<4; i++){
      sum = sum + matrix[i][j];
    }
  }
  printf("sum=%d", sum);
}
