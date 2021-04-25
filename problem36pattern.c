#include<stdio.h> //this code will print number pyramid.
int main()
{
    int r;

    printf("Enter the number of rows:");
    scanf("%d",&r);

    for (int i = 1; i <= r; i++)
    {
        for (int spc = 1; spc <= r-i; spc++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    


    return 0;

}