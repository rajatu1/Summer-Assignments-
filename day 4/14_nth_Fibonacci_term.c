#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, i;

    printf("Enter the position: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The 1st term is: %d\n", t1);
    } else if (n == 2) {
        printf("The 2nd term is: %d\n", t2);
    } else {
        for (i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("The %dth term is: %d\n", n, t2);
    }

    return 0;
}