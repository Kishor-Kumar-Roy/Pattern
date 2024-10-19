#include<stdio.h>
int main()
{
    int size,i,j,count=1;
    printf("enter size of your pattern: ");
    scanf("%d",&size);
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}


