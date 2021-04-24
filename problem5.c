#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two nums\n");
    scanf("%d %d", &a,&b);
    
    if(a==b)
    {
        printf("Numbers are equal.");
    }
    else
    {
        printf("Numbers are not equal.");
    }
    
    return 0;
}