#include <stdio.h>
int main()
{
    int hr,min,total;
    printf("Enter hours and minutes\n");
    scanf("%d %d", &hr,&min);
    total = hr*60+min;
    printf("Total is %d minutes.", total);

    return 0;
}