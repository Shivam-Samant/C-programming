#include<stdio.h>
int main()
{
    int a[100],i,j,n,max=0;
    printf("Enter the size of an array: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++)
    {
    if(a[i]>max){max=a[i];}
    }
    //printf("\n%d",max);
   // printf("\n%d",max-a[0]);
    for(i=0;i<max;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<(max-a[j])){printf(" ");}
            else printf("*");
        }
        printf("\n");
    }

}
