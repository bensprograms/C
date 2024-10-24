#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("Enter a number between 1 and 3: ");
        scanf("%d", &choice);  // Prompting for user input

        switch (choice)
        {
            case 1:
                printf("You entered 1.\n");
                break;
            case 2:
                printf("You entered 2.\n");
                break;
            case 3:
                printf("You entered 3.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 3.\n");
        }
    }
    while (choice < 1 || choice > 3);  // Loop continues if choice is not between 1 and 3

    return 0;
}
