#include <stdio.h>

int main() {
    char str[100];
    int i, count = 1; // initialize count to 1 to account for the last word
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read the string from the user
    
    // loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // if a space or newline is encountered, increment the count
        if (str[i] == ' ' || str[i] == '\n') {
            count++;
        }
    }
    
    // print the total number of words
    printf("Total number of words in the string: %d\n", count);
    
//    return 0;
}
