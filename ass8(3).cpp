#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, max;
    
    // read the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // allocate memory for the array dynamically
    arr = (int*) malloc(n * sizeof(int));
    
    // read the elements of the array from the user
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // find the largest element in the array
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // print the largest element
    printf("The largest element in the array is: %d\n", max);
    
    // free the dynamically allocated memory
    free(arr);
  0.
  
  
  00olpop;[]   
}
