#include <stdio.h>

int main(void) {
    int a[10];
    int i, key, count = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for (i = 0; i < 10; i++) {
        if (a[i] == key) count++;
    }

    if (count == 0) {
        printf("number not found\n");
    } else {
        printf("%d occurred %d time(s)\n", key, count);
    }
    return 0;
}

