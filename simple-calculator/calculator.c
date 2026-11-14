#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
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
		printf("0) QuitChoice: ");

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
			else if (choice == 3)
			{
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);
				printf("Result: %d\n", a * b);
			}
			else if (choice == 4)
			{
				printf("A: ");
				scanf("%d", &a);
				printf("B: ");
				scanf("%d", &b);
				if (b == 0)
				{
					printf("Error: division by zero\n");
				}
				else
				{
					printf("Result: %g\n", (double)a / b);
				}
			}
			else
			{
				printf("Invalid choice\n");
			}
		}
	}

	return (0);
}
