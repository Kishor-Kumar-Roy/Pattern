#include<stdio.h>
int main()
{
int size,i,j;
printf("enter size of pattern: ");
scanf("%d",&size);
for(i=1;i<=size;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("@ ");
    }
    printf("\n");
}
return 0;
}
