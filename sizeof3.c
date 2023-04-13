#include<stdio.h>
/**
*main -entry point 
*Description: check sizes of data types
*Return: Always 0, success
*/
int main(void){
/*char;
int;
double;
float;
unsigned int;
signed int;*/

printf("The size of a char type is:%ld  \n", sizeof(char));
printf("The size of int type is:%ld  \n", sizeof(int));
printf("The size of double type is:%ld \n", sizeof(double));
printf("The size of float type is:%ld \n", sizeof(float));
printf("The size of unsigned int is:%li \n", sizeof(unsigned int));
printf("The size of signed int is:%ld \n", sizeof(signed int));

return 0;
}
