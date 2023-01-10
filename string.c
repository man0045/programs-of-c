#include<stdio.h>
void main()
{
    int n,i;
    char s[20];
    printf("enter the size of string");
    gets(s);
    for(i=1;s[i]!='\0';i++)
    printf("%d",i);
        
}