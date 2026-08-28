#include <stdio.h>

int main()

{
    int num1, num2;

    {
        printf("Enter your first number: ");
        scanf("%d", &num1);
        printf("Enter your second number: ");
        scanf("%d", &num2);

        printf("Addition = %d", num1 + num2);
        printf("\n");
    }

    {
        printf("Enter your first number: ");
        scanf("%d", &num1);
        printf("Enter your second number: ");
        scanf("%d", &num2);

        printf("Substration = %d", num1 - num2);
        printf("\n");
    }

    {
        printf("Enter your first number: ");
        scanf("%d", &num1);
        printf("Enter your second number: ");
        scanf("%d", &num2);

        printf("Multiplication = %d", num1 * num2);
        printf("\n");
    }

    {
        printf("Enter your first number: ");
        scanf("%d", &num1);
        printf("Enter your second number: ");
        scanf("%d", &num2);

        printf("Division = %d", num1 / num2);
    }

    return 0;

}
