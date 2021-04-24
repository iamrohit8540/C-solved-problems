#include<stdio.h>
int main()
{
    int total,roll,p,c,cs;    
    float per;
    char name[20];
    printf("Enter your name\n");
    scanf("%s", &name);
    printf("Input your roll no.\n");
    scanf("%d", &roll);
    printf("Input your marks in Physics Chemistry Computer Application\n");
    scanf("%d %d %d", &p, &c, &cs);

    total = p+c+cs;
    per = (total * 100.0)/300.0;
    
    printf("Your name is %s \nRoll No. %d \nMarks in Physics %d \nMarks in Chemistry %d \nMarks in Computer Application %d\n", name,roll,p,c,cs);
    printf("Total marks are %d \n", total);
    printf("You got %f percentage\n", per);

    if(per < 33)
    {
        printf("You are failed");
    }
    else if(per < 50)
    {
        printf("Third Division");
    }
    else if(per < 60)
    {
        printf("Second Division");
    }
    else
    {
        printf("First Division");
    }
    

    



    return 0;

}