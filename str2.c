#include<stdio.h>
#include<string.h>

int main() {
    
  char s1[] = "London";
  char s2[] = " Bridge";

  char n[] = "New";
  char y[] = " York";
  char c[] = " City";

  // Concatenate s1 and s2 strings
  strcat(s1, s2);
  printf("%s\n", s1);

  // Concatenate n, y and c strings 
  strcat(n, y);
  strcat(n, c);
  printf("%s\n", n);

  return 0;

}
