/*Income Tax Paid*/
#include<stdio.h>
/*Main Program begins*/
int main(){
    /*Decleration Statement*/
    float Income, Tax;
    printf("Enter you yearly income in rupees to know how much income tax you need to pay : ");
    scanf("%f",&Income);
    /*Computation using if and elseif statement*/
    if(Income <= 0){
        printf("Invalid income, please enter valid income.");
    }
    else if(Income > 0 && Income < 250000){
        printf("You do not have to pay income tax your entered income is below Income Slab.");
    }
    else{
    if(Income >= 250000 && Income < 500000){
         Tax = (5/100)*Income;
        printf("Rupees %f you need to pay for your income tax as per enterd income.",Tax);
    }
        else if(Income >= 500000 && Income < 1000000){
             Tax = (20/100)*Income;
            printf("Rupees %f you need to pay for your income tax as per enterd income.",Tax);
        }
        else if(Income > 1000000){
             Tax = (30/100)*Income;
            printf("Rupees %f you need to pay for your income tax as per enterd income.",Tax);
        }
    }
    return 0;
}