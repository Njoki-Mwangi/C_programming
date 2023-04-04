#include<stdio.h>
int main(void)
{

int prices[5] = { 6, 8, 3, 1, 3};

printf("%u\n", *prices);

printf("%u\n", *(prices + 1));

printf("%u\n", *(prices + 2));

return (0);

}
