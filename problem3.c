#include<stdio.h>
int main()
{
    float h,w,p;
    printf("Enter the Height and Width of rectangle\n");
    scanf("%f %f", &h,&w);
    p = 2*(h+w);
    printf("Perimeter is %f", p);
    return 0;


}