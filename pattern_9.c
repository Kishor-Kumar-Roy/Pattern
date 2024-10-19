#include<stdio.h>
int main()
{
    int size,i,j;
    char count='A';
    printf("enter size of your pattern: ");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}


