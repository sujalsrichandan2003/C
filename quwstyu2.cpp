#include<stdio.h>
int armstrong(int orgnum)
{
	int remainder=0;
	int sum=0;
	int power=0;
	
	int num=orgnum;
	while(num!=0){
		remainder=num%10;
		power=remainder*remainder*remainder;
		sum=sum+power;
		
		num=num/10;
	}
	if(sum==orgnum)
	   return 0;
	else
	   return 1;   
}
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(armstrong(num)==0){
		printf("%d is an Armstrong number",num);
	}
	else{
		printf("%d is not an Armstrong number",num);
	}
	//return 0;
}
