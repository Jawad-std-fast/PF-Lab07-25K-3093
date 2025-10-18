#include <stdio.h>

int main(void) {
    int a[10];
    int mark[1000] = {0}; 
    int i;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        int num = a[i];
        if (num == -1) continue; 
        if (mark[num] == 0) {
            mark[num] = 1;  
        } else {
            a[i] = -1;  
        }
    }

    printf("Updated array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

