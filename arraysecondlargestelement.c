#include<stdio.h>
void main()
{
    int n,a[100],i,big,sbig;
    printf("Enter the limits");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    big=a[0];sbig=a[1];
    if(big<sbig)
    {
        big=a[1];
        sbig=a[0];
    }
    for(i=1;i<n;i++)
    {
    if(big<a[i])
    {
    sbig=big;
    big=a[i];
    }
    else if(sbig<a[i])
    sbig=a[i];
    }
    printf("Second Largest element=%d",sbig);
}
