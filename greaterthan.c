#include<stdio.h>
/**
*main -entry point
*Description: checks for the greater number
*Return: Always 0 (success)
*/
int main(void)
{
int x;
int y;
	printf("Input value of x\n");
	scanf("%d", &x);

	printf("input value of y\n");
	scanf("%d", &y);
		if (x > y)
		{
		printf("X is greater than Y\n");
		}
			else if (y > x)
			{		
			printf("Y is greater than X\n");
			}
			else{
			
			printf("X is equal to Y\n");
                        }
return 0;
}
