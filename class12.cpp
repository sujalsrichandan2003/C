#include<stdio.h>
float SumOfArrEle(float []); //prototype
int main()
{
	float data[]={11,22.2,33,44.3,55.1},result;
	result=SumOfArrEle(data);
	printf("\n\nAddition of array elements is %f",result);
}   //end of main
float SumOfArrEle(float arr[])//function definition
{
	float sum=0.0;
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	//return sum;
}
