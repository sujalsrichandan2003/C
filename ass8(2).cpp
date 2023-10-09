#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    int *element;
	printf("\n\n Find the largest element using Dynamic Memory Allocation :\n"); 	
    printf(" Input total number of elements(1 to 100): ");
    scanf("%d",&n);
    element=(int*)calloc(n,sizeof(float));  // Memory is allocated for 'n' elements 
    if(element==NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)  
    {
       printf(" Number %d: ",i+1);
       scanf("%d",element+i);
    }
    for(i=1;i<n;++i)  
    {
       if(*element<*(element+i)) 
           *element=*(element+i);
    }
    printf(" The Largest element is :  %d \n\n",*element);
    return 0;
}
