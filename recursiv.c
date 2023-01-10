#include <stdio.h>
int pattern(int n);
int main()
{
    int n, i;
    printf("enter the loop no up to which loop be occuring");
    scanf("%d", &n);
    printf("th loop would be merged after the %d\n",pattern(n));
    return 0;
}
int pattern(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        i = i + 1;
          return i;
    }
}