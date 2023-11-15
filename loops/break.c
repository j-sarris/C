// Break a while loop if a negative number is given by the user
#include <stdio.h>

int main() {

  int num = 1;
  int num_entered = 0;

  while (num_entered < 10) {
    printf("Please enter a number: ");
    scanf("%d", &num);

    // Write the code so as if a negative number is given to break the while loop
    
    num_entered++;
  }

  // Test if the loop has ended and print message "No negative number given"
  // Else print message about negative number breaking the loop
  
}
