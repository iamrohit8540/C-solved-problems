#include<stdio.h>
int main()
{
    float r;
    float vol; 

    printf("Enter the radius of sphere\n");
    scanf("%f", &r);
    vol = (4.0/3.0) *3.14* (r * r * r);
    printf("\nVolume of the sphere is %f", vol);
    return 0;
}