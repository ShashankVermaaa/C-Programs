/*Calculating area of a square using library function*/
#include<stdio.h>
#include<math.h>
/*Main program begins*/
int main(){
    /*Decleration statement*/
    int Side, Area;
    printf("Enter side in cm : ");
    scanf("%d",&Side);
    /*Computation Statement*/
    Area = pow(Side,2);
    /*Printing Statement*/
    printf("The area of the square whose lenght of side is %d cm is : %d cm sqaure",Side, Area);
    return 0;
}