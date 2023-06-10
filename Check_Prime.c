/*Check whether a number is prime number or not*/
#include<stdio.h>
/*Main program begins*/
int main(){
    /*Decleraion Statement*/
    int Number, Total_Dividers = 0;
    printf("Enter a number to check whether it is a prime number or not : ");
    scanf("%d",&Number);
    /*Computation using if conditional statemnt and for loop*/
    for(int i = 1; i <= Number; i++){
        if(Number % i == 0){
            Total_Dividers++;
        }
    }
    if(Total_Dividers == 2){
        printf("The number %d is a prime number.",Number);
    }
    else{
        printf("The number %d is not a prime number.",Number);
    }
    return 0;
}