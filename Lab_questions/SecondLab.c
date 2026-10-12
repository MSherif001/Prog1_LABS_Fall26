// Lab2 : Student Tasks : == == == == == == == == == ==
//                        Task[1] : == == == ==
#include <stdio.h>

void countPosNegZero(int n)
{
    int i, num;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0)
            positiveCount++;
        else if (num < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    printf("\nPositive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zero values: %d\n", zeroCount);
}

int main()
{
    int n;
    printf("Enter how many numbers you want to check: ");
    scanf("%d", &n);

    countPosNegZero(n);

    return 0;
}
//===================================================================================
// Task[2] : == == == == =
#include <stdio.h>

                          int isPerfectSquare(int n)
{
    int i;

    for (i = 0; i * i <= n; i++)
    {
        if (i * i == n)
            return 1; // n is a perfect square
    }

    return 0; // no i found such that i*i == n
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("negative numbers can't be perfect squares");
    else
    {
        if (isPerfectSquare(n))
            printf("%d is a perfect square.\n", n);
        else
            printf("%d is not a perfect square.\n", n);
    }

    return 0;
}
//===================================================================================
// Task[3] : == == == == =
#include <stdio.h>

void printFibonacci(int n)
{
    int i;
    int first = 0, second = 1, next;

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("%d ", first);
        else if (i == 2)
            printf("%d ", second);
        else
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
//===================================================================================
// Task[4] : == == == == =
#include <stdio.h>

void isValidTriangle(int a, int b, int c)
{

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The entered lengths (%d, %d, %d) form a valid triangle.\n", a, b, c);
    }
    else
    {
        printf("Invalid triangle: The sum of any two sides must be greater than the third side.\n");
    }
}

int main()
{
    int a, b, c;
    int valid = 0;

    printf("Enter the lengths of the three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    while (!valid)
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            printf("Invalid input: Side lengths must be positive numbers!\n");
            printf("Please re-enter the three side lengths: ");
            scanf("%d %d %d", &a, &b, &c);
        }
        else
            valid = 1;
    }

    isValidTriangle(a, b, c);

    return 0;
}
//===================================================================================