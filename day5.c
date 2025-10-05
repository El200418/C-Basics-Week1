#include<stdio.h>
int main(){
float num1;
float num2 ;
char operator;
printf("enter first number: ");
scanf("%f", &num1);
printf("enter second number: ");
scanf("%f", &num2);
printf("choose operation (+,-,*,/):");
scanf("%c", &operator);
switch(operator){
case '+':printf("Results = %.2f",num1+num2);
break;
case '-': printf("Result = %.2f" ,num1-num2);
break;
case '*': printf("Results = %.2f" ,num1*num2);
break;
case  '/':if(num2 != 0)
 printf("Reslts = %.2f" ,num1/num2);
else
printf("error! division by zero");
break;
default: 
printf("invalid operatior");
}
return 0;
}

