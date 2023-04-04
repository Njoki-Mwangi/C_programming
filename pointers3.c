#include<stdio.h>
/**
*main - entry point
*pointer - using  a ponter to initialize a variable
*Return: Always 0 (success)
*/
int main(void)/*main function where program starts execurion*/
{
int age;/* declaring a variable*/

int *address = &age;/*declaring a pointer to a type int,get the value of the adress the pointer is pointing to*/

*address = 37;/*using a pointer to initialize a variable*/

printf("%u\n",*address);/*print the value of the variable in which the address is pointing to*/ 

return 0;
}
