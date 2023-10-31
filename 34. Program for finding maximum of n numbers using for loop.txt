#include<stdio.h>
void main()
{
    int n,i;
    float num,maximum;
    printf("Enter the number of elements");
    scanf("%d",&n);
    maximum=-999999999;
    for(i=0;i<n;++i)
    {
        printf("Enter number");
        scanf("%f",&num);
        if(num>maximum)
        {
            maximum=num;
        }
    }
        printf("maximum number=%2f\n",maximum);
}