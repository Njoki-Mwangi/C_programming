#include<stdio.h>
int main(void)
{
int age;
char name [100];

printf("Enter your name: ");

scanf("%s", name);

printf("My name is %s\n", name); 

printf("Enter your age: ");
scanf("%d", &age);

printf("I am %d\n", age);

return 0;
}
