#include<stdio.h>
#define N 10
int n=1;
int main()
{
	fun();
	return 0;
}
void fun1()
{
	if(n<=N)
	{
		printf("%d\t",n);
		n=n+1;
		
	}
}
