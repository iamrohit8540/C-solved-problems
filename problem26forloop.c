#include<stdio.h> // this code is for a pyramid patterns of asteriks
int main()
{
    int i,j,row,spc;

    printf("Enter your value: ");
    scanf("%d",&row);
    

    for (i=1;i<=row;i++)
    {
        for (spc=1;spc<=row-i;spc++)
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



        
        
