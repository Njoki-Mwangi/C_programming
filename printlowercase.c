#include<stdio.h>
/**
*main -entry point
*Description:print lowercase alphabets
*Return:Always 0 (success)
*/
int main(void)
{

char ch;

for(ch ='a'; ch <= 'z'; ch++)
{
putchar(ch);
putchar(' ');
}
putchar('\n');
return 0;
}

