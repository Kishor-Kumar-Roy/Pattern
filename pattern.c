#include<stdio.h>
int main()
{
    int i, n,sp,st;
    printf("enter an value: ");
    scanf("%d",& n);
   for(i=1;i<=n;i++)
   {
    for(sp=n-i;sp>=1;sp--)
    {
        printf(" ");
    }
    for(st=1;st<=i;st++)
    {
        printf("$");
    }
    printf("\n");
   }
    return 0;
}