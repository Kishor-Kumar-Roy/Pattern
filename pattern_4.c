#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter size of pattern:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
       printf("* ");
        }
        printf("\n");
    }
    return 0;
}