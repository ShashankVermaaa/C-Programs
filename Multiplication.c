/* Multiplication Table */
#include<stdio.h>
/* Main Program Begins */
int main(){
/* Declaration Statement */    
int Number, mul;
printf("Multiplacation table of 5. \n");
/* Assignment Statement */    
Number = 5;
/* For Loop Begins */    
for(int n=1; n<=50; n++){
mul = Number*n;
printf("%d x %d = %d \n",Number, n, mul);
}
/*For Loop Ends */    
return 0;
}