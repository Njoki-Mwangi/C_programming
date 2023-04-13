#include<stdio.h>
int main(void)
{
int age;
char fname [100];
char sname [100];

printf("Enter your first name: ");

scanf("%s", fname);

printf("Enter your second name: ");

scanf("%s", sname);

printf("My name is %s %s\n", fname, sname); 

printf("Enter your age: ");
scanf("%d", &age);

printf("I am %d\n", age);

return 0;
}
