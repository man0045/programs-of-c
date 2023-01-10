#include<stdio.h>
void main()
{
    int bs,allow=1700,TS ,hra,da,pf;
    printf("enter the basic salary : ");
    scanf("%d",&bs);
    hra=(bs*20)/100;
    da=(bs*50)/100;
    pf=(bs*11)/100;
    TS =bs+hra+da+allow-pf;
    printf("%d",TS);

}