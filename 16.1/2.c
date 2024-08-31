#include <stdio.h>

int main() {
    char string[100];
    int frequency[256] = {0}; 

    printf("Enter any string: ");
    scanf("%s", string);

 
    for (int i = 0; string[i] != '\0'; i++) {
        frequency[(int)string[i]]++;
    }

    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c => %d\n", i, frequency[i]);
        }
    }

    return 0;
}