/*Create an array of 10 numbers. Verify using pointer arithmetic that ptr+2 points to the third element where ptr is a pointer pointing to the element of the array.*/
#include<stdio.h>
/*Main program begins*/
int main(){
    /*Decleration statement*/
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr+2;
    /*Computation using if else statement*/
    if(ptr == &arr[2]){
        ("Points to the third element.");
    }
    else{
        printf("Does not points to the third element.");
    }
    return 0;
}