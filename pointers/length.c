#include <stdio.h>

int str_length(char *p);

int main(){

  char *str;

  str="DIEK ZOGRAFOU";
  printf("Length of str is %d", str_length(str));
}

int str_length(char *p){
  int length=0;

  while(*p!='\0'){
    length++;
    p++;
  }
  return length;
}
