#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[], char result[]) {
    int len = strlen(str);
    int index = 0;

    for (int i = 0; i < len; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == i) {
            result[index++] = str[i];
        }
    }
    result[index] = '\0';
}

int main() {
    char str[100];
    char result[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    removeDuplicates(str, result);
     printf("String before removing duplictes: %s\n", str);
    printf("String after removing duplicates: %s\n", result);

    return 0;
}