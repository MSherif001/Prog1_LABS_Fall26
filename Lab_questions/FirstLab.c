/*
The Question was to make a C_function whose prototype:
                    Void countPosNegZero(int n);
    To determine how many number you enterd are positive,negative and zeros
    *Hint* main function will only read how many numbers you will enter,The rest of the code are in the function
    You have to print: Zeros=__     Positives=__   Negatives=__
*/

#include <stdio.h>
void countPosNegZero(int);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    countPosNegZero(n);
    return 0;
}

void countPosNegZero(int n)
{
    int x, i;
    int Pos = 0;
    int Neg = 0;
    int Zero = 0;
    for (i = 0; i < n; i++)
    {
        printf("Num%d: ", i + 1);
        scanf("%d", &x);
        if (x > 0)
        {
            Pos++;
        }
        else if (x < 0)
        {
            Neg++;
        }
        else if (x == 0)
        {
            Zero++;
        }
    }
    printf("Zeros = %d\n", Zero);
    printf("Positves = %d\n", Pos);
    printf("Negatives = %d\n", Neg);
}
