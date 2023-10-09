#include <stdio.h>
#define N 100
int top = -1;
int main()
{
    int stack[N], choice, ele;
    printf("\n 1: Push, 2: Pop, 3: Traversal, 0: Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        {
            // code for push operation
            break;
        }
        case 2:
        {
            // code for pop operation
            break;
        }
        case 3:
        {
            // code for traversal operation
            break;
        }
        case 0:
        {
            printf("Exiting program...\n");
            return 0;
        }
        default:
        {
            printf("Choose a correct choice\n");
            break;
        }
    }
}
