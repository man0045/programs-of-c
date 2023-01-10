#include <stdio.h>
int perfect(int n);
int main()
{
    int n;
    printf("enter the value n : ");
    scanf("%d", &n);
    printf("the perfect no is ,%d", perfect(n));
    return 0;
}
int perfect(int n)
{
    int r, i, j;
    for (i = 1; i < n; i++)
    {
        r = 0;
        {
            for (j = 1; j < i; j++)
            {
                if (i % j == 0)
                    r = r + j;

                if (i == r)
                    return i;
            }
        }
    }
}