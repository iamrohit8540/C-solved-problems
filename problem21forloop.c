#include<stdio.h>
int main()
{
    int i,n,num = -1,sum = 0;

    printf("Enter your value: ");
    scanf("%d", &n);

    for ( i = 1; i < n+1; i++)
   {
        num = num + 2;
        sum = sum + num;
        

        printf("%d\n",num);
        

    }
      
      printf("Their sum is %d",sum);
    return 0;
}