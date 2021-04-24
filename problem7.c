#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates\n");
    scanf("%d %d", &x,&y);
    if(x>0 && y>0)
    {
        printf("Coordinates point(%d,%d) lies in First quadrant.",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("Coordinates point(%d,%d) lies in Second quadrant.",x,y);
    }
     else if(x<0 && y<0)
    {
        printf("Coordinates point(%d,%d) lies in Third quadrant.",x,y);
    }
     else if(x>0 && y<0)
    {
        printf("Coordinates point(%d,%d) lies in Fourth quadrant.",x,y);
    }
    else
    {
        printf("Coordinates points are on origin.");
    }
    
    return 0;
}