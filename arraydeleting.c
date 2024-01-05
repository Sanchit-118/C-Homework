#include<stdio.h>
void main()
{
    int arr[30],i,num,loc;
    printf("Enter the no of elements");
    scanf("%d",&num);
    printf("Enter the values");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the location to delete=");
    scanf("%d",&loc);
    while(loc<num)
    {
        arr[loc-1]=arr[loc];
        loc++;
    }
    num--;
    for(i=0;i<num;i++)
    {
        printf("Values=%d\n",arr[i]);
    }
}