/*Celsius To Fahrenheit*/
#include<stdio.h>
/*Main Program Begins*/
int main(){
/*Decleration Statemnt*/
float Celsius, Fahrenheit;
printf("Enter temperature in Degree Celsius to convert it into Degree Fahrenheit : ");
scanf("%f",&Celsius);
/*Computation Statement*/
Fahrenheit = (Celsius*1.8)+32;
/*Print Statement*/
printf("%f Degree Celcius is equal to %f Degree Fahrenheit.",Celsius, Fahrenheit);
return 0;
}