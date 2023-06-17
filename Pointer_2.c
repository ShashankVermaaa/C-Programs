/*WAP a program having a variable i. Pass this variable to a function and print its address. Are these variable same? Why?*/
#include<stdio.h>
/*Funtion Decleration*/
void Address(int a);
/*Function Calling*/
/*Main Program Begins*/
int main(){
    /*Decleration Statement*/
    int i = 2;
    printf("The value of variable i is = %d\n",i);
    Address(i);
    printf("The address of variable i is = %u\n",&i);
        return 0;
}
/*Function Definition*/
void Address(int a){
    printf("The address of the variable i is = %u\n",&a);
}
/*The address of the variable i is different because when we pass a value to a funtion it is stored in another variable known decleared in the function.*/