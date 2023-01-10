#include <stdio.h>
int pallendrome(int a);
int main()
{
    int a, rev;
    printf("enter the number");
    scanf("%d", &a);
    // printf("%d",pallendrome(a));

    if(rev == a)
        printf("the no is pallendrome");

    // else

    //     printf("not a pallendrome");
}
int pallendrome(int a)
{
    int c = 0, rev, n,m;
    m=n;
    while ((a > 0))
    {
        a = n % 10;
        n = n / 10;
        rev = rev * 10 + a;
        return rev;
        
            // if (rev == a)
            //     return "the no is pallendrome";
            // else
            //     return "not a pallendrome";
        
    }
}