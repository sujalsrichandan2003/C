#include<stdio.h>
int main()
{
	int i,j;
	i=0;
	while(i<5)
	{
		j=0;
		while(j<5)
		{
			printf("\t");
			j=j+1;
		}
		printf("\n");
		i++;
	}
}
