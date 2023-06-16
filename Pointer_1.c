/*WAP to print the address of the variable. Use this address to get the value of this variable.*/
#include<stdio.h>
/*Main program begins*/
int main(){
/*Decleration Statement*/
    int i = 12;
    int *j = &i;
    /*Print statement*/
    printf("The address of the variable i is = %u.\n",j);
    printf("The Value stored in variable i is = %d.\n",*j);
    return 0;
}