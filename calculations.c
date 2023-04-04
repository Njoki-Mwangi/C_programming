#include<stdio.h>
int main(void)
{
int x = 10;
int  y = 5;
int  z = 75;
int true;
int false;

int add;
int subtract;
int multiply;
int division;
int parantheses;
int math;
int operator;

add = x + y;
subtract = z - x;
multiply = x * y;
division = z / y;
parantheses = ( z / y + x);
math = z / y + x;
operator = true || false;

printf("%d\n", add);
printf("%d\n", subtract);
printf("%d\n", multiply);
printf("%d\n", division);
printf("%d\n", parantheses);
printf("%d\n", math);
printf("%d\n", operator);
}
