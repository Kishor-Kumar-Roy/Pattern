#include<stdio.h>
int main()
{
    int size,i,j;
    printf("enter size of pattern: ");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        for(j=i;j<=size;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

