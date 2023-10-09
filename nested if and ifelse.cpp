#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks:");
	scanf("%d", &marks);
	if(marks>=50)
	{
		printf("pass\n");   
		if(marks>90)
		{
			printf("GRADE A");
		}
		else
			{
				printf("GRADE B");
			}
	}	
	else
	{
		printf("fail\n");
	}
}
