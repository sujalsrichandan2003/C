#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char name[20];
    int age;
    float salary;
	
	fp=fopen("student.txt","w");
	
	printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fp, "Name    = %s\n", name);
    printf("Enter the age\n");
    scanf("%d", &age);
    fprintf(fp, "Age     = %d\n", age);
    printf("Enter the salary\n");
    scanf("%f", &salary);
    fprintf(fp, "Salary  = %.2f\n", salary);
    fclose(fp);
	
	
	//return 0;
}
