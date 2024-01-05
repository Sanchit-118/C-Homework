#include<stdio.h>
void main()
{
    int array[10],i,n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the value");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d %d %d %d",array[i],*(i+array),*(array+i),i[array]);
    }
}