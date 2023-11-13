#include <stdio.h>

int main(void)
{
  int year;
  
  printf("Give year: ");
  scanf("%d",&year);
	
  if(year%4 == 0)
  {
    if(year%100 == 0)
    {
			if(year%400 == 0)
				printf("Disekto\n");
			else
				printf("Kanoniko\n");
    }
    else 
		  printf("Disekto\n");
  }
  else 
  {
    printf("Kanoniko\n");
  }
  return 0;
}
