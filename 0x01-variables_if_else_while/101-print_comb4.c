#include<stdio.h>
/**
 * main - print three digits seperated with , and space
 *
 * Return: (0)
 *
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = num1 + 1; num2 <10; num3++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');
				if(num == 7 && num2 == * && num3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
