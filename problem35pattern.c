#include<stdio.h> //this code is for printing rhombus pattern.
int main()
{
    int r;

    printf("Enter the number of rows: ");
    scanf("%d",&r);

    for (int i = 1;i<=r; i++)
    {
        for (int spc = 1;spc<=r-i; spc++)
        {
            printf(" ");
        }
        for ( int j = 1;j<=r; j++)
        {
            printf("* ");    
        }

        printf("\n");
        
    }
    
    return 0;
}
