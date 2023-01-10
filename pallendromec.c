#include<stdio.h>
int main()
{
    char s[30],ch,k;
    int i,l;
    k==s;
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