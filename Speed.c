/* Calculate Speed of a Car */
#include<stdio.h>
/* Main Program Begins */
int main(){
/*Declaration Statement*/
float speed, distance, time;
printf("Enter Distance travelled by the car in km = ");
/*Assignment Statement*/
scanf("%f\n",&distance);
printf("Enter the time taken for %f km for the car in hours = ",distance);
/*Assignment Statement*/
scanf("%f\n",&time);
/* Computation Statement*/
speed = distance/time;
/*Output Statement*/
printf("Speed of the car is = %f km/h",speed);
return 0;
}