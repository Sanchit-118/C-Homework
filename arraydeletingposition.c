#include<stdio.h>
void main()
{
    int arr[30],i,j,k,num;
    printf("Enter the no of elements");
    scanf("%d",&num);
    printf("Enter the values");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;)
        {
            if(arr[j]==arr[i])
            {
            for(k=j;k<num;k++)
            {
                arr[k]=arr[k+1];
            }
            num--;
            }
            else
            {
            j++;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("\n%d",arr[i]);
    }
}
