#include<stdio.h>
/**
*main-entry point
*pointers- assigning address to a value
*Return: Always 0 (success)
*/
int main(void)
{
int age = 37;
int *address = &age;/* declaring a pointer to a an integer pointer name address*/

printf("%u\n", *address);
}

