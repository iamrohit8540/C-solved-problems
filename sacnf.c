#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    printf("you entered %d as your age\n", age);
    if (age>18)
    {
        printf("you are eligible for voting");
    }
    return 0;
    


}