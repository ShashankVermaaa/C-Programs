/*Pass or Fail*/
#include<stdio.h>
/*Main program begins*/
int main(){
/*Decleration Statement*/
float Maths, Science, English, Total_Percentage, Maths_Percentage, Science_Percentage, English_Percentage, Total_Marks;
printf("Enter marks out of 100. \n");
printf("Marks in Maths : ");
scanf("%f",&Maths);
printf("Marks in Science : ");
scanf("%f",&Science);
printf("Marks in English : ");
scanf("%f",&English);
/*Computational Statement*/
Maths_Percentage = (Maths/100)*100;
Science_Percentage = (Science/100)*100;
English_Percentage = (English/100)*100;
Total_Marks = Maths+Science+English;
Total_Percentage = ((Total_Marks)/300)*100;
/*Computation using if-else Statement*/
if(Total_Marks >= 0 && Total_Marks<=300){    
if(Total_Percentage >= 40 || (Maths_Percentage >= 33 && Science_Percentage >= 33 && English_Percentage >= 33)){
printf("Your total prcentage is %f %.\n",Total_Percentage);    
printf("You are PASS.");
}
else{
printf("You are FAIL.");
}
}
else{
printf("Invalid Marks.");
}
return 0;
}