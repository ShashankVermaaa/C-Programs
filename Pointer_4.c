/*Write a program using function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main in c language.*/
#include <stdio.h>
/*Funtion decleration and definition*/
void calculateSumAndAverage(int num1, int num2, int* sum, float* average) {
    *sum = num1 + num2;
    *average = (float)(*sum) / 2;
}
/*Main program begins*/
int main() {
    /*Decleration Statement*/
    int number1, number2;
    int sum;
    float average;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    calculateSumAndAverage(number1, number2, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
