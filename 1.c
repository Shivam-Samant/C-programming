//PRINT THE PATTERN
// 1
// 11
// 121  
// 1331  
// 14441

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i){printf("1");}
            else{printf("%d",i-1);
            }
        }
    printf("\n");
    }
}