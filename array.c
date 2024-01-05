#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},i;
    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(i=9;i>=0;i--)
    printf("%d ",a[i]);
}