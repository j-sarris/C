// Reads 10 Fahrenheit temperatures given by the user, 
// converts them to Celcius and calculates the average temp
#include <stdio.h>

float Fahr_to_Celc(float temp);

int main(){
  float tempF, sumC=0;
  int i;
  
  for (i=1;i<=10;i++){
    printf("Give %d-th temperature: ", i);
    scanf("%f", &tempF);
    sumC+=Fahr_to_Celc(tempF);
  }
  printf("Average Celcius temp is %f degrees", sumC/10.0);
  return 0;
}

float Fahr_to_Celc(float temp)
{
  return (temp-32)*5/9;
}
