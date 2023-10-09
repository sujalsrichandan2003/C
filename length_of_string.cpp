#include<stdio.h>
int main()
{
	int count=0,i=0;
	char string[]="programming";
	
	while(string[i]!='\0')
	{
		count++;
		i++;
		
	}
	printf("\n length of the string is %d \n\n",count);
	return 0;
}
