#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    float avg;
    printf("Input 10 random numbers : \n");

    for ( i = 1; i < 11; i++)
    {
        printf("Number %d :",i);
        scanf("%d",&n);
    sum = sum + n;
    }
    

    printf("Their sum is %d",sum);
    printf("\nTheir avg is %f",sum/10.00);

    return 0;

}