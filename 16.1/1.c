#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);


    for (j = 0; str[j] != '\0'; j++);
    
    j--; 
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}