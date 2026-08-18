#include <stdio.h>

/**
 * main - Prints a simple calculator menu
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char choice;
    int num1, num2;
    float fnum1, fnum2;

    while (1)
    {
        printf("\nSIMPLE CALCULATOR\n\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n\n");

        printf("Choice: ");
        scanf(" %c", &choice);

        if (choice == '0')
        {
            printf("Bye!\n");
            break;
        }
        else if (choice == '1')
        {
            printf("Add\n");
            printf("A: ");
            scanf("%d", &num1);
            printf("B: ");
            scanf("%d", &num2);

            printf("Result: %d\n", num1 + num2);
        }
        else if (choice == '2')
        {
            printf("Subtract\n");
            printf("A: ");
            scanf("%d", &num1);
            printf("B: ");
            scanf("%d", &num2);

            printf("Result: %d\n", num1 - num2);
        }
        else if (choice == '3')
        {
            printf("Multiply\n");
            printf("A: ");
            scanf("%d", &num1);
            printf("B: ");
            scanf("%d", &num2);

            printf("Result: %d\n", num1 * num2);
        }
        else if (choice == '4')
        {
            printf("Divide\n");
            printf("A: ");
            scanf("%f", &fnum1);
            printf("B: ");
            scanf("%f", &fnum2);

            if (fnum2 == 0)
            {
                printf("Cannot divide by zero.\n");
            }
            else
            {
                printf("Result: %.1f\n", fnum1 / fnum2);
            }
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }

    return (0);
}
