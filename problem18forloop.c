#include<stdio.h>
int main()
{

    int n,i,sum = 0;

    printf("Please input your value: \n");
    scanf("%d", &n);
    printf("Numbers are ");

    for ( i = 1; i < n+1; i++)
    {
        printf("%d ",i);
        sum = sum + i;
    }
    printf("\b.\nTheir sum is %d",sum);
    
    return 0;

}