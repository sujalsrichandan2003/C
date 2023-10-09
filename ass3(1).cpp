#include<stdio.h>
int main()
{
	int array[5],i;
	   printf("Enter array elements: ");
	for(i=0;i<=4;i++)
  {
		scanf("%d",&array[i]);
	}
	printf("reverse array elements:\n");
	for(i=4;i>=0;i--)
  {
		printf("%d\n",array[i]);
  }
}

