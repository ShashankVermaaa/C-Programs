/*WAP to change the value of a variable to ten times of its current value. Write a function and pass the value by reference.*/
#include<stdio.h>
/*Function Decleration*/
void Change(int *a);
/*Function Calling*/
/*Main function begins*/
int main(){
    /*Decleration Statement*/
    int Number;
    printf("Enter any Number = ");
    scanf("%d",&Number);
    Change(&Number);
    /*print statement*/
    printf("10 times of the entered Number is = %d\n",Number);
    return 0;
}
/*Funtion Definition*/
void Change(int *a){
    *a = (*a)*10;
}