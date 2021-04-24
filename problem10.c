#include<stdio.h>
int main()
{
    float temp;

    printf("Enter temperature ");
    scanf("%f", &temp);
    
    if(temp <= 0)
    {
        printf("Its freezing weather");
    }
    else if(temp > 0 && temp < 10)
    {
        printf("Its very cold weather");
    }
    else if(temp>10 && temp < 20)
    {
        printf("Its cold weather");
    }
    else if(temp > 20 && temp < 30)
    {
        printf("Its normal temperature");
    }
    else if(temp > 30 && temp < 40)
    {
        printf("Its Hot weather");
    }
    else if(temp >= 40)
    {
        printf("Its very Hot weather");
    }
    return 0;
}