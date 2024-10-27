#include <stdio.h>

int main() {
    int num;
    float inc;

    printf("Enter a positive integer N: ");
    scanf("%d", &num);

    printf("Numbers from %d to 0 in descending order:\n", num);
    for (int i = num; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Numbers from 1 to %d following pattern B:\n", num);
    for (int i = 1; i <= num; i++) {
	    if(i%10==4 || i%10==7)
		    continue;

        printf("%d ", i);
    }
    printf("\n");

    printf("Enter an increment value less than 1 (e.g., 0.9): ");
    scanf("%f", &inc);

    if (inc >= 1) {
        printf("Error: Increment should be less than 1\n");
    } else {
        printf("Numbers from 0 to %d with an increment of %f:\n", num, inc);
        for (float i = 0.0; i <= num; i += inc) {
            printf("%.2f ", i);
        }
        printf("\n");
    }

    return 0;
}

