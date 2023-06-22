/*WAP a program to create an array of 10 integers and store multiplication table of n.*/
#include<stdio.h>
/*Main program begins*/
int main(){
    /*Decleration statement*/
    int Table[10], Number;
    printf("Enter a number to prints its multiplication table : ");
    scanf("%d",&Number);
    /*Computation using for loop*/
    for(int i = 0; i < 10; i++){
        Table[i] = Number * (i+1);
        printf("%d x %d = %d\n",Number, (i+1), Table[i]);
    }
    return 0;
}