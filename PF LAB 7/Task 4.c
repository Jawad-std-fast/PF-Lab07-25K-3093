#include <stdio.h>

int main() {
    char str[201];
    int i = 0;

    printf("Enter a sentence (max 200 chars):\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    while (str[i] != '\0') {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') {
            str[i] = c - 'A' + 'a';
        }
        else if (c >= 'a' && c <= 'z') {
            str[i] = c - 'a' + 'A';
        }
        i++;
    }

    printf("Converted: %s", str);
    return 0;
}

