#include <stdio.h>
int main()
{
    int n, sum = 0, f1 = 0, f2 = 1, i;
    printf("Enter a number:- ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d\n", f1);
    }
    else if (n == 2)
    {
        printf("%d\n", f1);
        printf("%d\n", f2);
    }
    else
    {
        printf("%d\n", f1);
        printf("%d\n", f2);

        for (i = 1; i < (n - 1); i++)
        {
            sum = f1 + f2;
            f1 = f2;
            f2 = sum;
            printf("%d\n", sum);
        }
    }

    return 0;
}