// Converts Celcius degrees to Fahrenheit degrees. Prints the result with 2 decimal points.
/*
Modifications TODO:
Ask the user if to convert (C)elcious to Fahrenheit or (F)ahrenheit to Celcious
If 'C' is chosen use the current code to transform Celcius to Fahrenheit.
If 'F' is chosen write the code to transform Fahrenheit to Celcius
*/

#include <stdio.h>

int main(){

    float degC, degF;

    printf("Give degrees in Celcius: ");
    scanf("%f", &degC);

    degF = degC * 9/5+32;

    printf("%.2f Celcius degrees = %.2f Fahrenheit degrees", degC, degF);

    return 0;

}
