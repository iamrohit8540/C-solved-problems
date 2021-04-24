#include<stdio.h>
int main()
{
    int a,i=1;

    printf("Enter a number\n");
    scanf("%d", &a);

    do{
        printf("%d\n", i);
        i = i+1;


    }while(i<a+1);


    return 0;

}