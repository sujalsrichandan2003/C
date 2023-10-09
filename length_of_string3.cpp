//Finding length of a string
#include <stdio.h>
#include<stdlib.h>
int main ()
{
    int length=0,i=0,flag;
    char string[]="Programme", revStr[20]={'\0'};
    for(i=0;string[i]!='\0';i++)//Iterate loop till end of string
    {
        length++;
    }
    //Reverse the string
    for(i=length-1;i>=0;i--)//Iterate loop till end of string
    {
        revStr[length-i-1]=string[i];
    }
   for(i=0;i<length;i++)
   {
       if(revStr[i]==string[i])
        flag=1;
       else
        flag=0;
   }
   if(flag==1)
    printf("\n Palindrome \n\n");
   else
    printf("\n NOT Palindrome \n\n");
//return 0;
}
