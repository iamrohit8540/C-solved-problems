#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter your value : ");
    scanf("%d",&n);

    for ( i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",n,i,(n*i));
    }
    


    return 0;

}