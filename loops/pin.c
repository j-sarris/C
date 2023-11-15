// TO DO. Change the while loop so as to break if the guess of the pin is correct

#include <stdio.h>

int main() {
  int pin = 0;
  int tries = 0;

  printf("---CENTRAL BANK-----\n");
  printf("Enter your PIN: ");
  scanf("%d", &pin);

  tries++;

  while (pin != 1234 && tries < 3) {
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    tries++;
  }

  if (pin == 1234) 
    printf("PIN accepted!\n");
  else
    printf("Wrong PIN!\n");

  return 0;
}
