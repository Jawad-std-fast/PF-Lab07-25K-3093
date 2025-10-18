#include <stdio.h>

int main() {
    int marks[10], failed[10];
    int i, n = 0, fcount = 0;
    int input;
    int pass_sum = 0, pass_count = 0, fail_sum = 0;

    printf("Enter marks for up to 10 students (enter -1 to stop):\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &input);
        if (input == -1) break;
     
        marks[n++] = input;

      
        if (input >= 5 && input <= 10) {
            pass_sum += input;
            pass_count++;
        } else if (input >= 0 && input < 5) {
            failed[fcount++] = input;
            fail_sum += input;
        } else {
     
        }
    }

    printf("Entered marks (%d): ", n);
    for (i = 0; i < n; i++) {
	printf("%d ", marks[i]);
	}
    printf("\n");
 
    printf("Failed marks (%d): ", fcount);
    for (i = 0; i < fcount; i++){
	 printf("%d ", failed[i]);
	}
    printf("\n");

    if (pass_count > 0) {
        printf("Average of passed students = %.2f\n", (double)pass_sum / pass_count);
    } else {
        printf("No passed students to average.\n");
    }

    if (fcount > 0) {
        printf("Average of failed students = %.2f\n", (double)fail_sum / fcount);
    } else {
        printf("No failed students to average.\n");
    }

    return 0;
}

