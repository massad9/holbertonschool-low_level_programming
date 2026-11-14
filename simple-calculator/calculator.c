#include <stdio.h>

/**
 * main - Entry point for the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int a, b;

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
			else if (choice == 1)
			{
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);
				printf("Result: %d\n", a + b);
			}
			else if (choice == 2)
			{
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);
				printf("Result: %d\n", a - b);
			}
			else if (choice >= 3 && choice <= 4)
			{
				/* Future operations */
			}
			else
			{
				printf("Invalid choice\n");
			}
		}
	}

	return (0);
}
