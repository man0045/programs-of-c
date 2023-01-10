#include<stdio.h>
void main()
{
    char ch;
    printf("enter the charecter to check whether it is consonent or vowel : ");
    scanf("%c", &ch);
    if(ch=='A'||ch=='I'||ch=='o'||ch=='U'||ch=='E'||ch=='a'||ch=='i'||ch=='e'||ch=='O'||ch=='u')
    {
    printf("vowel");

    }
    else
printf("consonent");
}