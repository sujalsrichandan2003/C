#include<stdio.h>
int main()
{
    char choice;
    printf("\n Enter m for Monday \n  Enter t for Tuesday \n Enter w for Wednesday \n Enter T for Thursday \n Enter f Friday \n Enter s for Saturday \n");
    scanf("%c", &choice);

    switch(choice)
    {
    case 'm':
        printf(" Its Monday today So C class 3:30-5:30pm for Lab Evaluation");
        break;
    case 't':
        printf(" Hurrey! No C class Today");
        break;
    case 'w':
        printf(" its Wednesday Today so C class 3:30-5:30pm for Lab Evaluation");
        break;
    case 'T':
        printf(" Hurrey! No C class Today");
        break;
    case 'f':
        printf(" its Friday Today so C class 9:30-11:30pm for Lab Evaluation");
        break;
    case 's':
        printf(" its Saturday Today so C class 9:30-11:30pm for Lab Evaluation");
	}

}
