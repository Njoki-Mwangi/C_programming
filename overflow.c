#include <stdio.h>
/**
 * main -Entry point
 * Description:the problem of overflow
 * Return:Always 0 (success)
 */
int main(void)
{
	unsigned char j = 255;

	j = j + 10;
	printf("%u", j);
	printf("\n");
}
