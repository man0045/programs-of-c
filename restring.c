#include<stdio.h>
int main()
{
    char s[30],ch;
    int i,l;
    printf("enter the string ");
    gets(s);
    for(l=0;s[l];l++);
    for (i=0;i<l/2;i++)
    {
        ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;
    
    }
    printf("%s",s);
}