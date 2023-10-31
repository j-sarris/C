#include <stdio.h> 

// calculates the average of 3 int values
int main(void)
{
/* modifications TODO
     1. Get the 3 values as input from the user 
     2. Calculate the average of 3 random values. Use rand() function to get the three random values
     3. Calculate the average of three float values. Show the output with 2 decimal digits.
*/

    int a, b, c;
    float avg;

    a = 5; 
    b = 7; 
    c = 4; 

    avg= (a+b+c)/3.0;

    printf("Ο μέσος όρος των αριθμών %d, %d και %d είναι: %4.3f\n", a, b, c, avg);
		
    return 0;    
}
