#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the array elements:a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        printf("To print the values\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}