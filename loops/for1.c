//Prints characters from A to Z, with corresponding ASCII codes

#include <stdio.h>

int main(){

  char ch;
    
  for (ch='A'; ch<='Z'; ch++){
    printf("%c %d\n", ch, ch);
  }
  return 0;
}
