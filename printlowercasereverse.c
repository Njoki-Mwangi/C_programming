#include<stdio.h>
/**
*main -entry point
*Description:print lowercase in reverse
*Return: Always 0 (success)
*/
int main(void)

{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
putchar(' ');
}
putchar('\n');
return 0;
} 
