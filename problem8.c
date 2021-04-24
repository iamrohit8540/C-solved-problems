#include<stdio.h>
int main()
{
    int p,c,m;
    printf("Enter your marks in Maths Physics and Chemistry\n");
    scanf("%d %d %d", &m,&p,&c);




    if(m>=65)
{
    if(p>=55)        
{
    if(c>=50)            
{
    if( m+p+c >=180||m+p >= 140)

    {
        printf("Congrats you are eligible.");
    }
    
    else
    {
        printf("sorry you are not eligible.");
    }
}

else 
    { 
        printf("You are not eligible.");
    }
}    
    else
    {
        printf("you are not eligible.");
    }
}    
    else
    {
        printf("You are not eligible.");
    }
    
    
    return 0;
}