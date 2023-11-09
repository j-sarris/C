#include <stdio.h> 

int main(void)
{
// what would be the output of the printf statements
	
int a, b, c, d, e;
	
a=b=c=d=5;
	
++a;
b=++a;
c=d--;
e=a++ + --d;
    
printf("a=%d, b=%d, c=%d, d=%d, e=%d\n ", a, b, c, d, e);
 	
return 0;    
}
