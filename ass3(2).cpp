#include<stdio.h>
int main()
{
     int i,array[16],largest,smallest;
	 printf("Enter the elements of the array: ");
	 for(i=0;i<16;i++)
	 {
	 	scanf("%d",&array[i]);
	 }	
	 largest=array[0];
	 smallest=array[0];
	 for(i=1;i<16;i++)
	 {
	 	if(array[i]>largest)
		 {
	 		largest=array[i];
		 }
		if(array[i]<smallest)
		{
			smallest=array[i];
		} 
	 }
	 	printf("The largest number is: %d\n",largest);
				printf("The smallest number is: %d",smallest);
}
