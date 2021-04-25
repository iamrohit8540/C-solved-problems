#include<stdio.h> //this code prints symmetrical asteriks pyramid.
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);

    for (int i = 1; i <= r; i++)
    {
        for ( int spc = 1; spc <= r-i; spc++)
        {
            printf("  ");
        }
        
        
        for ( int j = 1; j <= 2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = r; i >= 1; i--)
    {
        for ( int spc = 1; spc <= r-i; spc++)
        {
            printf("  ");
        }
        
        
        for ( int j = 1; j <= 2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}