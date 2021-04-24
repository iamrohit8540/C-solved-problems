#include<stdio.h> // this code is for a pyramid patterns of asteriks
int main()
{
    int i,j,k,row,spc;

    printf("Enter your value: ");
    scanf("%d",&row);
    spc=row-1;

    for (i=1;i<=row;i++,spc--)
    {
        for (k=spc;k>=1;k--)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}



        
        
