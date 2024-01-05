#include<stdio.h>
void main()
{
    int i,marks[30],n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the values");
    for(i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("marks[%d]= %d\n",i,marks[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("marks[%d]= %d\n",i,&marks[i]);
}
}