/* Investment Problem*/
#include<stdio.h>
/*Main Program Begins*/
int main(){
/*Declaration Statement*/
int year, Period;
float amount, value, inrate;
/*Assignment Statement*/
amount = 5000.00;
inrate = 0.11;
year = 0;
    Period = 10;
/*Computation Statement*/
/*Computation Using While Loop*/
while(year<=Period){
printf("%2d   %8.2f\n",year, amount);
value = amount + (inrate*amount);
year = year+1;
amount = value;
}
/*While Loop Ends*/
    return 0;
}
/*Program Ends*/