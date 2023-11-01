// demonstrate the #define command
// calculate the area of a circle with radius 2

#define PI 3.1415  //#define name value
#include <stdio.h>

int main(){
    int rad = 2;
    float area;

    area = 2 * PI * rad * rad;

    printf("The area of a cirlce with radious %d is %f", rad, area);

    return 0;

}
