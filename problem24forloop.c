#include<stdio.h> /*This code is to print a right angle triangle pattern of natural repeating numbers.*/
int main()
{
    int i,j,row;

    printf("Enter your value: ");
    scanf("%d",&row);

    for (i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
            
        }
        printf("\n");

    }

    return 0;

}