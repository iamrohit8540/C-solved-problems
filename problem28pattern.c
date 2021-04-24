#include<stdio.h> /*This code is to print a hollow rectangle os asteriks.*/
int main()
{
     int i,j,k,l,row,clmn;

    printf("Enter the number of rows and column: ");
    scanf("%d %d",&row,&clmn);
    
    for (i=1;i<=row;i++)
    {
        for (j=1; j<=clmn; j++)
        {
            if (i==1 || i==row || j==1 || j==clmn)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}
        