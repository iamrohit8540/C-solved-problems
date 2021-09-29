#include<stdio.h> // rectangular asteriks pattern


int main()
{
    int n,m;

    printf("Enter dimensions: ");
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
