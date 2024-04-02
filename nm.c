#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int choice, n, fact = 1;
    printf("1:Factorial\n2:Check Prime\n3:Odd or Even\nEnter Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter Number: ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial of The Number is: %d", fact);
        break;
    case 2:
        printf("Enter N: ");
        scanf("%d", &n);
        int flag = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Non Prime");
        }
        else
        {
            printf("Prime");
        }
        break;
    case 3:
        printf("Enter Number: ");
        scanf("%d", &n);
        if (n % 2 == 0)
            printf("Even Number!");
        else
            printf("Odd Number!");
        break;
    default:
        printf("Invalid Option Try Again");
        break;
    }
    return 0;
}