#include<stdio.h>
void main()
{
    int a[100],n,sum=0,sum1=0;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter array elemens");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
    }
    printf("odd Sum=%d\n",sum);
    printf("even Sum=%d",sum1);
}