#include <stdio.h>

/**
 * main - Entry point for the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;

	while (1)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit");
		printf("Choice: ");

		if (scanf("%d", &choice) == 1)
		{
			if (choice == 0)
			{
				printf("Bye!\n");
				break;
			}
			else if (choice >= 1 && choice <= 4)
			{
				/* Operations will be added in future tasks */
			}
			else
			{
				printf("Invalid choice\n");
			}
		}
	}

	return (0);
}
