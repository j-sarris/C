#include <stdio.h>
#include <conio.h>
int main()
{
  char password[10], username[10], ch;
  int i, j;

  printf("Email id : ");
  gets(username);
  printf("Password : ");
  for(i = 0;i < 100;i++){
    ch = getch();
    if(ch == 13)
      break;
    password[i] = ch;
    ch = '*' ;
    printf("%c", ch);
}

  password[i] = '\0';
  printf("\nYour password is hacked : ");
  # print the password by iterating through the table
  for(j = 0;j < i;j++)
    printf("%c", password[j]);

  # or print it a a string
  printf("\n%s", password);

  return 0;
}
