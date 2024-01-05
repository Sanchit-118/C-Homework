#include<stdio.h>
void main()
{
    int a[100],i,n,j,b,k=0,t;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter array elemens");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        k=0;
        for(j=k+1;j<n-i;j++)
        
        {
            if(a[k]>a[j])
            {
                t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
            k++;
        }
    }
    printf("The sorted array");
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
}