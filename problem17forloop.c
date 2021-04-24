#include<stdio.h>
int main()
{
    int i,sum = 0;
    printf("The first ten natural numbers are ");
    for ( i = 1; i < 11; i++)
    {
       
       printf("%d ",i);
        sum = sum + i;
        

    }
    printf("\nTheir sum is %d", sum);
    return 0;

}