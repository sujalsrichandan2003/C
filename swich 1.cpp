#include<stdio.h>
int main() 
{
   char choice;
   printf("enter m for monday, t for tuesday, w for wednesday,T for thurs, f for fri,s for saturday:");
   scanf("%c", &choice);
   switch(choice)
   {
    case 'm':
    printf("monday");
    break;
    case 't':
    printf("tuesday");
    break;
    case 'w':
    printf("wednesday");
    break;
    case 'T':
    printf("thursday");
    break;
    case 'f':
    printf("friday");
    break;
    case 's':
    printf("saturday");
    break;
   }
}





