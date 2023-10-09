#include<stdio.h>
int main()
{
    int arr2[16];
    int i,greatest,smallest;
    printf("Enter array elements: \n");
    for(i=0;i<16;i=i+1)
	{
        scanf("%d",&arr2[i]);
    }
    greatest=smallest=arr2[0];
    for (i=0;i<16;i=i+1)
	{
        if (arr2[i]<smallest)
		{
            smallest=arr2[i];
        }
    }
    for (i=0;i<16;i=i+1)
	{
        if (arr2[i]>greatest)
		{
            greatest=arr2[i];
        }
    }
    printf("%d is the largest.",greatest);
    printf("\n%d is the smallest.",smallest);
//    return 0;
}
