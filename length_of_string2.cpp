#include<stdio.h>
#include<stdlib.h>
int main()
{
	int length=0,i=0;
	char string[]="radar ",revStr[20]={'\0'};
	for(i=0;string[i]!='\0';i++) //iterate loop till the end of loop
	{
		length++;
	}
	printf("\n Length of the string is %d \n\n",length);
//return 0;
}
