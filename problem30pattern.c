#include<stdio.h> //for printing reverse asteriks triangle(ver 2.0).
int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d",&row);

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=row;j++)
        {
            if (j<=row-i)
            {
                printf("  "); /*double space is given here if you give single space then pattern will become pyramid */
            }
            else
            {
                printf("* "); /*space is added here also for a good looking pattern*/
            }
            
            
        }
        printf("\n");

    }
    return 0;
        
}
        
