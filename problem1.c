#include<stdio.h>
int main()
{
   int m,s;
   printf("Enter your marks obtained in maths and science\n");
   scanf("%d %d",&m,&s);
   printf("your marks in maths are %d and your marks in science are %d.\n",m,s);
   
   if(m>20&&s>20)
   {
      printf("Congrats you are getting a book of 45 rupees.");
   }
   else if(m>20||s>20)
   {
      printf("Congrats you are getting a pen of 15 rupees.");
   }
   else
   {
      printf("Congrats you are failed in both subjects.");
   }
   
   

   return 0;

}